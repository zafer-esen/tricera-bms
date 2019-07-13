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
# 2 "<stdin>" 2
# 11 "<stdin>"
# 1 "./stdlib.h" 1




void __foo(void *arg){


}
# 12 "<stdin>" 2
extern int __VERIFIER_nondet_int(void);


typedef struct TSLL
{
 struct TSLL* next;
 int data;
} SLL;


typedef struct TBCK
{
 struct TBCK* next;
 SLL* list;
 int data;
} BCK;

int main()
{

 BCK* bucket = malloc(sizeof(BCK));
 bucket->data = 0;
 bucket->list = 0;

 bucket->next = malloc(sizeof(BCK));
 BCK* bcki = bucket->next;
 bcki->data = 1;
 bcki->list = 0;

 bcki->next = malloc(sizeof(BCK));
 bcki = bcki->next;
 bcki->data = 2;
 bcki->list = 0;
 bcki->next = 0;

 struct TSLL* item = 0;
 struct TSLL* itr = 0;
 while (__VERIFIER_nondet_int())
 {
  item = malloc(sizeof(SLL));
  item->next = 0;
  if (__VERIFIER_nondet_int())
   item->data = 0;
  else if (__VERIFIER_nondet_int())
   item->data = 1;
  else
   item->data = 2;

  bcki = bucket;

  __VERIFIER_assert(bcki != 0);
  __VERIFIER_assert(item != 0);
  while (bcki->data != item->data)
   bcki = bcki->next;
  __VERIFIER_assert(bcki != 0);

  if (bcki->list == 0)
   bcki->list = item;
  else
  {
   itr = bcki->list;
   while (itr->next != 0)
    itr = itr->next;
   itr->next = item;
  }
 }


 bcki = bucket;
 while(bcki != 0)
 {
  item = bcki->list;
  bcki->list = 0;
  while(item != 0)
  {
   itr = item;
   item = item->next;
   __VERIFIER_assert(itr->data != bcki->data);
   __foo(itr);
  }
  __VERIFIER_assert(item == 0);
  bucket = bcki;
  bcki = bcki->next;
  __foo(bucket);
  bucket = 0;
 }

 return 0;
}
