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

void abort(void){
  return 1;
}
# 2 "<stdin>" 2


extern int __VERIFIER_nondet_int();
# 21 "<stdin>"
struct sl_item {
 struct sl_item *n1, *n2;
};


struct sl {
 struct sl_item *head, *tail;
};

struct sl_item* alloc_or_die(void)
{
 struct sl_item *pi = malloc(sizeof(struct sl_item));

 return pi;
}

struct sl* create_sl_with_head_and_tail(void)
{
 struct sl *sl = malloc(sizeof(struct sl));

 sl->head = malloc(sizeof(struct sl_item));
 sl->tail = malloc(sizeof(struct sl_item));

 sl->head->n2 = sl->head->n1 = sl->tail;
 sl->tail->n2 = sl->tail->n1 = 0;

 return sl;
}



void sl_random_insert(struct sl *sl)
{

 struct sl_item *a1, *a2;
 struct sl_item *new;

 a2 = sl->head;
 while (a2->n2 != sl->tail && __VERIFIER_nondet_int())
  a2 = a2->n2;


 a1 = a2;
 while (a1->n1 != a2->n2 && __VERIFIER_nondet_int())
  a1 = a1->n1;


 new = malloc(sizeof(struct sl_item));

 new->n1 = a1->n1;
 a1->n1 = new;


 if (__VERIFIER_nondet_int()) {
  new->n2 = a2->n2;
  a2->n2 = new;
 }
}

void destroy_sl(struct sl *sl)
{
 struct sl_item *tmp;

 while (sl->head) {
  tmp = sl->head;
  sl->head = sl->head->n1;
  __foo(tmp);
 }
 __foo(sl);
}

void myexit(int s) {
 _EXIT: goto _EXIT;
}

typedef struct node {
  int h;
  struct node *n;
} List;

int main() {

  List* a = malloc(sizeof(struct node));
  if (a == 0) myexit(1);
  List* t;
  List* p = a;
  a->h = 2;
  while (__VERIFIER_nondet_int()) {
    p->h = 1;
    t = malloc(sizeof(struct node));
    if (t == 0) myexit(1);
    p->n = t;
    p = p->n;
  }
  p->h = 2;
  p->n = 0;
  p = a;
  while (p!=0) {
    if (p->h != 2) {
      ERROR: assert(0);
    }
    p = p->n;
  }

   struct sl *sl = create_sl_with_head_and_tail();

   while (__VERIFIER_nondet_int())
     sl_random_insert(sl);

   destroy_sl(sl);

  return 0;
}
