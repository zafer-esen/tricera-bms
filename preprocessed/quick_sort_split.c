# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 1 "./stdlib.h" 1







void __foo(void *arg){


}
# 2 "<stdin>" 2
extern int __VERIFIER_nondet_int();







struct node {
    int expected_list;
    int value;
    struct node *next;
};

void append_to_list(struct node **list, int val, int exp) {
    struct node *node = malloc(sizeof(*node));
    node->next = *list;
    node->value = val;
    node->expected_list = exp;
    *list = node;
}

struct node *create_list() {
    struct node *list = 0;
    while (__VERIFIER_nondet_int()) {
        int v = __VERIFIER_nondet_int();
        if (v < 0)
            append_to_list(&list, v, -1);
        else
            append_to_list(&list, v, 1);
    }
    return list;
}

int main() {
    struct node *list = create_list();

    struct node *low = 0;
    struct node *high = 0;


    struct node *p = list;
    while (p) {
        struct node *l = p->value >= 0 ? high : low;
        struct node *next = p->next;
        p->next = l;
        l = p;
        p = next;
    }


    while (low) {
        if (!(low->expected_list == -1))
            assert(0);
        low = low->next;
    }
    while (high) {
        if (!(high->expected_list == 1))
            assert(0);
        high = high->next;
    }
}
