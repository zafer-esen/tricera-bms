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




typedef struct node {
    int val;
    struct node *next;
} Node;

int main() {
    Node *p, *list = malloc(sizeof(*list));
    Node *tail = list;
    list->next = 0;
    list->val = 10;
    while (__VERIFIER_nondet_int()) {
        int x = __VERIFIER_nondet_int();
        if (x < 10 || x > 20) continue;
        p = malloc(sizeof(*p));
        tail->next = p;
        p->next = 0;
        p->val = x;
        tail = p;
    }

    while (1) {
        for (p = list; p!= 0; p = p->next) {
            if (!(p->val <= 20 && p->val >= 10))
                assert(0);
            if (p->val < 20) p->val++;
            else p->val /= 2;
        }
    }
}
