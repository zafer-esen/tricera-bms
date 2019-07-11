# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 10 "<stdin>"
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

 struct TSLL* list = malloc(sizeof(struct TSLL));
 list->next = 0;
 list->prev = 0;
 list->colour = BLACK;

 struct TSLL* end = list;


 while (__VERIFIER_nondet_int())
 {

  end->next = malloc(sizeof(struct TSLL));
  end->next->prev = end;
  end = end->next;
  end->next = 0;

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
   end->next = 0;
   end->colour = BLACK;
  }
  __VERIFIER_assert(BLACK == end->colour);
  __VERIFIER_assert(0 == end->next);
  __VERIFIER_assert(0 != end);
 }

 end = 0;
 end = list;


 __VERIFIER_assert(0 != end);
 __VERIFIER_assert(BLACK == end->colour);
 while (0 != end)
 {
  if (RED == end->colour)
  {
   end = end->next;
   __VERIFIER_assert(0 != end);
   __VERIFIER_assert(BLACK == end->colour);
  }

  end = end->next;
 }


 while (0 != list)
 {
  if (RED == list->colour)
  {
   end = list->next;

   list = end->next;

  }
  else
  {
   end = list->next;

   list = end;
  }
 }

 return 0;
}
