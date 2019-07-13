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
# 14 "<stdin>"
extern int __VERIFIER_nondet_int(void);
# 48 "<stdin>"
typedef struct TSLL
{
 struct TSLL* next;
 struct TSLL* prev;
 struct TSLL* opt;
 int data;
} SLL;

int main()
{

 SLL* head = malloc(sizeof(SLL));
 head->next = 0;
 head->prev = 0;
 if (__VERIFIER_nondet_int()) { head->data = 2; head->opt = malloc(sizeof(SLL)); head->opt->next = 0; } else if (__VERIFIER_nondet_int()) { head->data = 1; head->opt = head; } else { head->data = 0; head->opt = head; }
 SLL* x = head;

 while (__VERIFIER_nondet_int()) { x->next = malloc(sizeof(SLL)); x->next->prev = x; x = x->next; x->next = 0; if (__VERIFIER_nondet_int()) { x->data = 2; x->opt = malloc(sizeof(SLL)); x->opt->next = 0; } else if (__VERIFIER_nondet_int()) { x->data = 1; x->opt = x; } else { x->data = 0; x->opt = x; } }


 x = head;
 while (x != 0)
 {
  __VERIFIER_assert((x->data == 2 && x->opt != x && x->opt->next == 0) || x->opt == x);
  x = x->next;
 }

 x = head;

 while (x != 0)
 {
  head = x;
  x = x->next;
  if (head->data == 2)
   __foo(head->opt);
  __foo(head);
 }

 return 0;
}
