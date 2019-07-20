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
# 12 "<stdin>"
extern int __VERIFIER_nondet_int(void);


typedef struct TSLL
{
 struct TSLL* next;
 int data;
} SLL;

int main()
{

 SLL* head = malloc(sizeof(SLL));
 head->next = head;
 head->data = 0;

 SLL* x = head;
 int state = 1;


 while (__VERIFIER_nondet_int())
 {

  x->next = malloc(sizeof(SLL));
  x = x->next;
  x->next = head;

  if (__VERIFIER_nondet_int())
  {
   if (state == 1)
    state = 2;
   else if (state == 2)
    state = 3;
   else
    break;
  }

  x->data = state;

  __VERIFIER_assert(0 != x);
 }
 x->data = state;

 x = head->next;
 __VERIFIER_assert(0 != x);

 while (x->data != 0)
 {
  __VERIFIER_assert(x->next->data == 0 || x->data <= x->next->data);
  x = x->next;
 }

 x = head->next;

 while (x->data != 0)
 {
  head = x;
  x = x->next;
  __foo(head);
 }
 __foo(x);

 return 0;
}
