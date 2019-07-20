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
# 15 "<stdin>"
extern int __VERIFIER_nondet_int(void);
# 34 "<stdin>"
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


 while (__VERIFIER_nondet_int()) { x->next = malloc(sizeof(SLL)); x = x->next; x->next = 0; x->data = 0; }


 x = head;
 while (x->next != 0 && __VERIFIER_nondet_int())
 {
  __VERIFIER_assert(x != 0);
  x = x->next;
 }
 __VERIFIER_assert(x != 0);

 x->data = 1;

 if (x->next == 0)
 {
  x->next = malloc(sizeof(SLL)); x = x->next; x->next = 0; x->data = 2;
 }
 else
  x->next->data = 2;


 SLL* prev = 0;
 x = head;
 while(x != 0)
 {
  SLL* next = x->next;

  x->next = prev;

  prev = x;

  x = next;

 }
 head = prev;


 x = head;
 while (x != 0)
 {
  int t1 = x->data;
  int t2 = 0;
  if (t1 == 2)
   t2 = x->next->data;
  __VERIFIER_assert(t1 != 2 || t2 == 1);


  if (x->data == 2)
   x = x->next;

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
