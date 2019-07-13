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
    int stock;
    int order;
} Node;

int main() {
    Node *l = 0;

    while (__VERIFIER_nondet_int()) {
        int stock = __VERIFIER_nondet_int();
        if (stock < 0)
            continue;

        Node *p = malloc(sizeof(Node));
        p->stock = stock;
        p->order = 0;
        {p->next=l; l=p;}
    }

    Node *i = l;
    while (i != 0) {
        int order = __VERIFIER_nondet_int();
        if (order < 0 || i->stock < order)
            continue;
        i->order = order;
        i->stock = i->stock;
        i = i->next;
    }


    i = l;
    while (i != 0) {
        if (i->order > i->stock)
            assert(0);
        i = i->next;
    }
}
