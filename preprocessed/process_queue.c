# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
extern int __VERIFIER_nondet_int();


# 1 "./stdlib.h" 1



void free(){


}
# 5 "<stdin>" 2



struct process_node {
    int process_id;
    int time_to_wait;

    struct process_node *next;
};

void run_process(int id) { (void)id; }

void append_to_queue(struct process_node *n, struct process_node **q) {
    n->next = *q;
    *q = n;
}

struct process_node *choose_next(struct process_node **q) {
    struct process_node *node = *q;
    struct process_node *prev = 0;
    struct process_node *result = 0;
    while (node != 0) {
        if (node->time_to_wait == 1) {
            result = node;
            if (prev == 0)
                *q = node->next;
            else
                prev->next = node->next;
        } else {
            node->time_to_wait--;
        }
        prev = node;
        node = node->next;
    }
    return result;
}

void check_queue(struct process_node *q) {
    for (struct process_node *n = q; n != 0; n = n->next)
        if (!(n->time_to_wait >= 1))
            assert(0);
}


int main() {
    struct process_node *queue = 0;
    int next_time = 1;

    while (__VERIFIER_nondet_int()) {
        if (next_time < 1000 && __VERIFIER_nondet_int()) {
            int new_id = __VERIFIER_nondet_int();

            struct process_node *new_process = malloc(sizeof(*new_process));
            new_process->process_id = __VERIFIER_nondet_int();
            new_process->time_to_wait = next_time++;
            append_to_queue(new_process, &queue);
        } else if (next_time > 1){
            struct process_node *p = choose_next(&queue);
            next_time--;
            run_process(p->process_id);
        }

        check_queue(queue);
    }
}
