# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 16 "<stdin>"
extern int __VERIFIER_nondet_int(void);
# 36 "<stdin>"
typedef struct TDLL
{
 struct TDLL* next;
 struct TDLL* prev;
 int data;
} DLL;

int main()
{

 DLL* head = malloc(sizeof(DLL));
 head->next = 0;
 head->prev = 0;
 head->data = 0;

 DLL* x = head;


 while (__VERIFIER_nondet_int()) { x->next = malloc(sizeof(DLL)); x->next->prev = x; x = x->next; x->next = 0; x->data = 0; }


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
  x->next = malloc(sizeof(DLL)); x->next->prev = x; x = x->next; x->next = 0; x->data = 2;
 }
 else
  x->next->data = 2;


 DLL* prev = 0;
 x = head;
 while(x != 0)
 {
  DLL* next = x->next;

  x->next = prev;
  x->prev = next;

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

 }

 return 0;
}
