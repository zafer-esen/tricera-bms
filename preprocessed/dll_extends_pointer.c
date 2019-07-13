# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
extern int __VERIFIER_nondet_int(void);
# 10 "<stdin>"
# 1 "./stdlib.h" 1



void free(){


}
# 11 "<stdin>" 2

typedef struct TData
{
 char x;
} Data;

typedef struct TNode
{
 struct TNode* next;
 struct TNode* prev;
 Data* pData;
 Data data;
} Node;

int main()
{
 Node* list = 0;
 Node* y = 0;

 y = malloc(sizeof(*y));
 y->next = 0;
 y->prev = 0;
 y->pData = &y->data;
 list = y;

 while (__VERIFIER_nondet_int())
 {
  y = malloc(sizeof(*y));
  y->next = list;
  list->prev = y;

  if (__VERIFIER_nondet_int())
  {
   y->pData = malloc(sizeof(*y->pData));
  }
  else
  {
   y->pData = &y->data;
  }

  list = y;
 }

 while (0 != list)
 {
  y = list;
  list = list->next;

  if (&y->data != y->pData)
  {
   free(y->pData);
  }

  free(y);
 }

 return 0;
}
