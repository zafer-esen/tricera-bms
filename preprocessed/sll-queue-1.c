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
# 14 "<stdin>"
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
 SLL* item = head;
 int status = 0;

 while (__VERIFIER_nondet_int())
 {
  item->next = malloc(sizeof(SLL));
  item = item->next;
  item->next = 0;

  if (!status)
  {
   item->data = 1;
   status = 1;
  }
  else if (status == 1)
  {
   item->data = 2;
   status = 2;
  }
  else if (status >= 2)
  {
   item->data = 3;
   status = 3;
  }

  __VERIFIER_assert(head != 0);
  __VERIFIER_assert(item != 0);
 }

 __VERIFIER_assert(head != 0);
 if (status == 1)
 {
  __VERIFIER_assert(head != 0);
  __VERIFIER_assert(head->next != 0);
 }
 if (status == 2)
 {
  __VERIFIER_assert(head != 0);
  __VERIFIER_assert(head->next != 0);
  __VERIFIER_assert(head->next->next != 0);
 }
 if (status == 3)
 {
  __VERIFIER_assert(head != 0);
  __VERIFIER_assert(head->next != 0);
  __VERIFIER_assert(head->next->next != 0);
  __VERIFIER_assert(head->next->next->next != 0);
  __VERIFIER_assert(head->next->next->next->data == 3);
 }

 item = head->next;

 while(item && __VERIFIER_nondet_int())
 {
  __VERIFIER_assert(!status || item->data > 0);
# 108 "<stdin>"
  item = item->next;
 }


 while(head)
 {
  item = head;
  head = head->next;
  __foo(item);
 }

 return 0;
}
