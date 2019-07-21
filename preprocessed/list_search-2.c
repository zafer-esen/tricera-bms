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


void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: assert(0);
  }
  return;
}
# 1 "./stdio.h" 1
# 11 "<stdin>" 2


typedef struct list {
 int key;
 struct list *next;
} mlist;

mlist *head;

mlist* search_list(mlist *l, int k){
 l = head;
 while(l!=0 && l->key!=k) {
  l = l->next;
 }
 return l;
}

int delete_list(mlist *l){
 mlist *tmp;
 tmp = head;
 if (head != l) {
  while(tmp->next!=l) {
   tmp = tmp->next;
  }
 } else {
  head = l->next;
 }
 tmp->next = l->next;
 __foo(l);
 return 0;
}

int insert_list(mlist *l, int k){

 l = calloc(sizeof(mlist));

 if (head==0) {
  l->key = k;
  l->next = 0;
 } else {
  l->key = k;
  l->next = head;
 }
 head = l;

 return 0;
}

int main(void){

 int i;
 mlist *mylist = 0;
 mlist *temp;

 insert_list(mylist,2);
 insert_list(mylist,5);
 insert_list(mylist,1);
 insert_list(mylist,3);

 mylist = head;

 while(mylist) {
  mylist = mylist->next;
 }

 temp = search_list(mylist,2);
 __VERIFIER_assert(temp->key==2);
 delete_list(temp);

 mylist = head;

 while(mylist) {
  mylist = mylist->next;
 }
 return 0;
}
