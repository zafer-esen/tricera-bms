# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 12 "<stdin>"
extern int __VERIFIER_nondet_int(void);

struct list_head {
    struct list_head *next, *prev;
};
# 26 "<stdin>"
static inline void __list_add(struct list_head *new,
                              struct list_head *prev,
                              struct list_head *next)
{
    next->prev = new;
    new->next = next;
    new->prev = prev;
    prev->next = new;
}

static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
    __list_add(new, head->prev, head);
}

struct top_list {
    struct list_head link;
    struct list_head sub1;
    struct list_head sub2;
};

struct sub_list {
    int number;
    struct list_head link;
};

void destroy_sub(struct list_head *head)
{
    struct sub_list *now = ((struct sub_list *)((char *)(head->next)-(unsigned long)(&((struct sub_list *)0)->link)));

    while (&now->link != (head)) {
        struct sub_list *next = ((struct sub_list *)((char *)(now->link.next)-(unsigned long)(&((struct sub_list *)0)->link)));


        now = next;
    }
}

void destroy_top(struct list_head *head)
{
    struct top_list *now = ((struct top_list *)((char *)(head->next)-(unsigned long)(&((struct top_list *)0)->link)));

    while (&now->link != (head)) {
        struct top_list *next = ((struct top_list *)((char *)(now->link.next)-(unsigned long)(&((struct top_list *)0)->link)));

        destroy_sub(&now->sub1);
        destroy_sub(&now->sub2);


        now = next;
    }
}

void insert_sub(struct list_head *head)
{
    struct sub_list *sub = malloc(sizeof(*sub));
    if (!sub)
        abort();

    sub->number = 0;

    list_add_tail(&sub->link, head);
}

void create_sub_list(struct list_head *sub)
{
    sub->prev = sub;
    sub->next = sub;

    do
        insert_sub(sub);
    while (__VERIFIER_nondet_int());
}

void insert_top(struct list_head *head)
{
    struct top_list *top = malloc(sizeof(*top));
    if (!top)
        abort();

    create_sub_list(&top->sub1);
    create_sub_list(&top->sub2);

    list_add_tail(&top->link, head);
}

void create_top(struct list_head *top)
{
    do
        insert_top(top);
    while (__VERIFIER_nondet_int());
}

int main()
{
    struct list_head top = { &(top), &(top) };

    create_top(&top);

    destroy_top(&top);

    return 0;
}
