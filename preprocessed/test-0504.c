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




extern int __VERIFIER_nondet_int(void);

int main() {

    struct T {
        struct T* next;
        struct T* prev;
        int data;
    };

    struct T2 {
        struct T head;
        struct T2* next;
        struct T2* prev;
    };

    struct T2* first = 0;
    struct T2* last = 0;

    while (__VERIFIER_nondet_int()) {

        struct T2* x = malloc(sizeof(struct T2));
        if (!x)
            abort();

        x->next = 0;
        x->prev = 0;
        x->head.next = &x->head;
        x->head.prev = &x->head;
        x->head.data = 0;

        struct T* y = 0;

        while (__VERIFIER_nondet_int()) {
            y = malloc(sizeof(struct T));
            if (!y)
                abort();

            y->next = x->head.next;
            y->next->prev = y;
            y->prev = &x->head;
            y->data = 0;
            x->head.next = y;
            y = 0;
        }

        if (!first) {
            first = x;
            last = x;
        } else {
            last->next = x;
            x->prev = last;
            last = x;
        }

    }

    while (first) {

        struct T2* x = first;
        first = first->next;

        struct T* y = x->head.next;
        while (y != &x->head) {
            struct T* z = y;
            y = y->next;
            __foo(z);
        }

        __foo(x);

    }

    return 0;

}
