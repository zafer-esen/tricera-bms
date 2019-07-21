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

int insert_list(mlist *l, int k){
  l = calloc(sizeof(mlist));
  l->key = k;
  if (head==0) {
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
  mlist *mylist, *temp;
  insert_list(mylist,2);
  insert_list(mylist,5);
  insert_list(mylist,1);
  insert_list(mylist,3);
  temp = search_list(head,2);
  __VERIFIER_assert(temp->key==1);

  while(head!=0) {
    mlist *tmp = head->next;
    __foo(head);
    head = tmp;
  }
}
