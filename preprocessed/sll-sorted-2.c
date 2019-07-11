# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 15 "<stdin>"
extern int __VERIFIER_nondet_int(void);


typedef struct TSLL
{
 struct TSLL* next;
 int data;
} SLL;

int main()
{

 SLL* head = malloc(sizeof(SLL));
 head->next = 0;
 head->data = 0;

 SLL* x = head;
 int marked = 0;


 while (__VERIFIER_nondet_int() || !marked)
 {

  x->next = malloc(sizeof(SLL));
  x = x->next;
  x->next = 0;

  if (__VERIFIER_nondet_int())
  {
   marked = 1;
  }

  if (marked)
   x->data = 1;
  else
   x->data = 0;
 }

 x = head;

 __VERIFIER_assert(0 != x);
 marked = 0;

 while (x->next != 0 && x->next->data == 0)
 {
  __VERIFIER_assert(x->data == 0);
  x = x->next;
 }

 while (x->next != 0 && __VERIFIER_nondet_int())
 {
  x = x->next;
  __VERIFIER_assert(x->data == 1);
 }

 SLL* tmp = malloc(sizeof(SLL));
 tmp->data = 1;
 tmp->next = 0;
 if (x->next == 0)
  x->next = tmp;
 else
 {
  tmp->next = x->next;
  x->next = tmp;
 }

 marked = 0;
 x = head;
 while (x != 0 && x->data != 1)
 {
  marked = x->data;
  __VERIFIER_assert(x->data == 0);
  __VERIFIER_assert(marked == 0);
  x = x->next;
 }
 while (x != 0)
 {
  marked = x->data;
  __VERIFIER_assert(x->data == 1);
  __VERIFIER_assert(marked == 1);
  x = x->next;
 }
# 109 "<stdin>"
 x = head;

 while (x != 0)
 {
  head = x;
  x = x->next;

 }

 return 0;
}
