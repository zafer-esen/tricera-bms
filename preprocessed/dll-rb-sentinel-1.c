# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 10 "<stdin>"
# 1 "./stdlib.h" 1




void __foo(void *arg){


}
# 11 "<stdin>" 2
extern int __VERIFIER_nondet_int(void);


typedef enum {RED, BLACK} Colour;

struct TSLL
{
 struct TSLL* next;
 struct TSLL* prev;
 Colour colour;
};

int main()
{
 struct TSLL* null = malloc(sizeof(struct TSLL));
 null->next = 0;
 null->prev = 0;
 null->colour = BLACK;

 struct TSLL* list = malloc(sizeof(struct TSLL));
 list->next = null;
 list->prev = null;
 list->colour = BLACK;

 struct TSLL* end = list;


 while (__VERIFIER_nondet_int())
 {

  end->next = malloc(sizeof(struct TSLL));
  end->next->prev = end;
  end = end->next;
  end->next = null;

  if (__VERIFIER_nondet_int())
  {
   end->colour = BLACK;
  }
  else
  {
   end->colour = RED;
   end->next = malloc(sizeof(struct TSLL));
   end->next->prev = end;
   end = end->next;
   end->next = null;
   end->colour = BLACK;
  }
  __VERIFIER_assert(BLACK == end->colour);
  __VERIFIER_assert(null == end->next);
  __VERIFIER_assert(null != end);
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
   __VERIFIER_assert(BLACK != end->colour);
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

 return 0;
}
