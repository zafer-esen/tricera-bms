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
extern int __VERIFIER_nondet_int(void);
# 13 "<stdin>"
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

 y = malloc(sizeof(Node));
 y->next = 0;
 y->prev = 0;
 y->pData = &y->data;
 list = y;

 while (__VERIFIER_nondet_int())
 {
  y = malloc(sizeof(Node));
  y->next = list;
  list->prev = y;

  if (__VERIFIER_nondet_int())
  {
   y->pData = malloc(sizeof(Data));
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
   __foo(y->pData);
  }

  __foo(y);
 }

 return 0;
}
