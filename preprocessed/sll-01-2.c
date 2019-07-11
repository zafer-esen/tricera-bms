# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 11 "<stdin>"
extern int __VERIFIER_nondet_int(void);
# 26 "<stdin>"
typedef struct TSLL
{
 struct TSLL* next;
 struct TSLL* inner;
} SLL;

int main()
{

 SLL* list = malloc(sizeof(SLL));
 list->next = 0;
 __VERIFIER_assert(list != 0); if (__VERIFIER_nondet_int()) { list->inner = 0; } else { list->inner = malloc(sizeof(SLL)); list->inner->next = 0; list->inner->inner = 0; } __VERIFIER_assert(list->inner != 0 || list->inner == 0);;

 SLL* end = list;


 while (__VERIFIER_nondet_int())
 {

  end->next = malloc(sizeof(SLL));
  end = end->next;
  end->next = 0;
  __VERIFIER_assert(0 != end);
  __VERIFIER_assert(end != 0); if (__VERIFIER_nondet_int()) { end->inner = 0; } else { end->inner = malloc(sizeof(SLL)); end->inner->next = 0; end->inner->inner = 0; } __VERIFIER_assert(end->inner != 0 || end->inner == 0);;
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
   if (len == 1)
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

   end = 0;
  }
  end = list->next;

  list = end;
 }

 return 0;
}
