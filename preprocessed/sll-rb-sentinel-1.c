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
# 11 "<stdin>"
extern int __VERIFIER_nondet_int(void);


typedef enum {RED, BLACK} Colour;

typedef struct TSLL
{
 struct TSLL* next;
 Colour colour;
} SLL;

int main()
{
 SLL* null = calloc(sizeof(SLL));
 null->colour = BLACK;
 null->next = 0;

 SLL* list = calloc(sizeof(SLL));
 list->next = null;
 list->colour = BLACK;

 SLL* end = list;


 while (__VERIFIER_nondet_int())
 {

  end->next = calloc(sizeof(SLL));
  end = end->next;
  end->next = null;

  if (__VERIFIER_nondet_int())
  {
   end->colour = BLACK;
  }
  else
  {
   end->colour = RED;
   end->next = calloc(sizeof(SLL));
   end = end->next;
   end->next = null;
   end->colour = BLACK;
  }
 }

 end = null;
 end = list;


 __VERIFIER_assert(null != end);
 __VERIFIER_assert(BLACK == end->colour);

 while (null != end)
 {
  if (RED == end->colour)
  {
   end = end->next;
   __VERIFIER_assert(null != end);
   __VERIFIER_assert(BLACK == end->colour);
  }

  end = end->next;
 }


 while (null != list)
 {
  if (RED == list->colour)
  {
   end = list->next;
   __foo(list);
   list = end->next;
   __foo(end);
  }
  else
  {
   end = list->next;
   __foo(list);
   list = end;
  }
 }

 __foo(null);

 return 0;
}
