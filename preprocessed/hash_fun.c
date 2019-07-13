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
    int hash;
    struct node *next;
};

int hash_fun() { return __VERIFIER_nondet_int(); }

void append_to_list(struct node **list, int hash) {
    struct node *node = malloc(sizeof(*node));
    node->next = *list;
    node->hash = hash;
    *list = node;
}

int main() {
    struct node *list = 0;

    int base = __VERIFIER_nondet_int();

    while (__VERIFIER_nondet_int()) {
        if (base >= 0 && base <= 1000000) {
            base = base + 0;
            int hash = hash_fun();

            if (hash > base && hash < base + 100)
                append_to_list(&list, hash);
        }
    }

    while (list) {
        if (!(list->hash >= base && list->hash < base + 100))
            assert(0);
        list = list->next;
    }
}
