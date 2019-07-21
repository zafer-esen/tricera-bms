# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 1 "./stdlib.h" 1
# 10 "./stdlib.h"
void __foo(void *arg){


}

void abort(void){
  return 1;
}
# 2 "<stdin>" 2
extern int __VERIFIER_nondet_int();




struct mem {
    int val;
};

struct list_node {
    int x;
    struct mem *mem;
    struct list_node *next;
};

int main() {
    struct mem *m = calloc(sizeof(struct mem));
    m->val = 0;

    struct list_node *head = calloc(sizeof(struct list_node));
    head->x = 1;
    head->mem = m;
    head->next = head;

    struct list_node *list = head;

    while (__VERIFIER_nondet_int()) {
        int x = __VERIFIER_nondet_int();
        if (x > 0 && x < 10) {
            struct list_node *n = calloc(sizeof(struct list_node));
            n->x = x;
            n->mem = m;
            n->next = head;
            list->next = n;
        }
    }

    list = head;
    while (m->val < 100) {
        if (list->mem->val + list->x <= 100)
            list->mem->val += list->x;
        list = list->next;
    }
    if (!(m->val == 100))
        assert(0);
}
