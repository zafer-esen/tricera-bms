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





typedef struct TSLL
{
 struct TSLL* next;
 struct TSLL* prev;
 int data;
} SLL;

int main()
{

 SLL* head = malloc(sizeof(SLL));
 head->next = 0;
 head->prev = 0;
 head->data = 0;

 SLL* x = head;


 while (__VERIFIER_nondet_int())
 {

  x->next = malloc(sizeof(SLL));
  x->next->prev = x;
  x = x->next;
  x->data = 0;
  x->next = 0;
 }


 if (__VERIFIER_nondet_int()) {
  x = malloc(sizeof(SLL));
  x->data = 1;
  x->next = head;
  x->prev = 0;
  head = x;
 }
 else
 {

  x = head;
  while (x->next != 0)
  {
   if (__VERIFIER_nondet_int()) break;
   x = x->next;
  }


  SLL* y = x->next;
  x->next = malloc(sizeof(SLL));
  x = x->next;
  x->data = 1;
  x->next = y;
  if (y != 0)
  {
   x->prev = y->prev;
   y->prev = x;
  }
 }


 x = head;


    while (x->data != 1)
 {
  x = x->next;
    }


    x = x->next;
    while (x)
 {
  if (x->data != 1)
   __VERIFIER_assert(0);
        x = x->next;
    }


 x = head;
 while (x != 0)
 {
  head = x;
  x = x->next;
  __foo(head);
 }

 return 0;
}
