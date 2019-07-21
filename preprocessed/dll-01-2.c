# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 1 "./stdlib.h" 1
# 10 "./stdlib.h"
void __foo(void *arg){


}

void abort(void){
  return 1;
}
# 2 "<stdin>" 2
# 10 "<stdin>"
extern int __VERIFIER_nondet_int(void);
# 25 "<stdin>"
typedef struct TSLL
{
 struct TSLL* next;
 struct TSLL* prev;
 struct TSLL* inner;
} SLL;

int main()
{

 SLL* list = calloc(sizeof(SLL));
 list->next = 0;
 list->prev = 0;
 __VERIFIER_assert(list != 0); if (__VERIFIER_nondet_int()) { list->inner = 0; } else { list->inner = calloc(sizeof(SLL)); list->inner->next = 0; list->inner->inner = 0; } __VERIFIER_assert(list->inner != 0 || list->inner == 0);;

 SLL* end = list;


 while (__VERIFIER_nondet_int())
 {

  end->next = calloc(sizeof(SLL));
  end->next->prev = end;
  end = end->next;
  end->next = 0;
  __VERIFIER_assert(0 != end);
  __VERIFIER_assert(end != 0); if (__VERIFIER_nondet_int()) { end->inner = 0; } else { end->inner = calloc(sizeof(SLL)); end->inner->next = 0; end->inner->inner = 0; } __VERIFIER_assert(end->inner != 0 || end->inner == 0);;
 }

 end = 0;
 end = list;


 __VERIFIER_assert(0 != end);

 while (0 != end)
 {
  int len = 0;
  SLL* inner = end->inner;
  while (0 != inner)
  {
   if (len == 0)
    len = 1;
   else
    len = 2;
   __VERIFIER_assert(0 != inner);
   __VERIFIER_assert(0 == inner->inner);
   __VERIFIER_assert(0 == inner->next);
   inner = inner->inner;
  }
  __VERIFIER_assert(len <= 1);

  end = end->next;
 }


 while (0 != list)
 {
  end = list->inner;

  if (0 != end)
  {
   __VERIFIER_assert(0 != end);
   __VERIFIER_assert(0 == end->inner);
   __VERIFIER_assert(0 == end->next);
   __foo(end);
   list->inner = 0;
  }
  end = list->next;
  __foo(list);
  list = end;
 }

 return 0;
}
