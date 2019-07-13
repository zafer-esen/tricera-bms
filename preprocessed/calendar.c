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



typedef struct node {
    struct node *next;
    int event1;
    int event2;
} Node;

int main() {
    Node *l = 0;

    while (__VERIFIER_nondet_int()) {
        int ev1 = __VERIFIER_nondet_int();
        int ev2 = __VERIFIER_nondet_int();
        if (ev1 < 0 || ev1 > 3 || ev2 < 0 || ev2 > 3)
            continue;

        if (((ev1 == 0) && (ev2 == 2)) || ((ev1 == 1) && (ev2 == 3)) || ((ev1 == 0) && (ev2 == 3)))
            continue;

        Node *p = malloc(sizeof(Node));
        p->event1 = ev1;
        p->event2 = ev2;
        {p->next=l; l=p;}
    }

    Node *i = l;

    while (i != 0) {
        if (((i->event1 == 1) && (i->event2 == 3)) || ((i->event1 == 0) && (i->event2 == 2)))
            assert(0);
        i = i->next;
    }
}
