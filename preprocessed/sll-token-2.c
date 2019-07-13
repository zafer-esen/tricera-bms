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
# 9 "<stdin>" 2
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


 while (__VERIFIER_nondet_int())
 {

  x->next = malloc(sizeof(SLL));
  x = x->next;
  x->data = 0;
  __VERIFIER_assert(0 != x);
 }
 x->data = 1;
 x->next = malloc(sizeof(SLL));
 x->next->data = 2;

 x = head;

 __VERIFIER_assert(0 != x);

 while (1 != x->data)
 {
  __VERIFIER_assert(0 == x->data);
  x = x->next;
 }
 __VERIFIER_assert(1 == x->data);
 x = x->next;
 __VERIFIER_assert(2 == x->data);

 x = head;

 while (1 != x->data)
 {
  head = x;
  x = x->next;
  __foo(head);
 }
 __VERIFIER_assert(1 == x->data);
 __foo(x->next);
 __foo(x);

 return 0;
}
