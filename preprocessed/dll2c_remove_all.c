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







typedef struct node {
  struct node *next;
  struct node *prev;
  int data;
} DLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

DLL* node_create(int data) {
  DLL* temp = calloc(sizeof(struct node));
  if(0 == temp) {
    myexit(1);
  }
  temp->next = 0;
  temp->prev = 0;
  temp->data = data;
  return temp;
}

DLL* dll_circular_create(int len, int data) {
  DLL* head = node_create(data);
  DLL* last = head;
  while(len > 1) {
    DLL* new_head = node_create(data);
    new_head->next = head;
    if(head) {
      head->prev = new_head;
    }
    head = new_head;
    len--;
  }
  last->next = head;
  head->prev = last;
  return head;
}

void dll_circular_remove_first(DLL** head) {
  DLL* temp = (*head)->next;
  if(temp == *head) {
    __foo(*head);
    *head = 0;
  } else {
    DLL* last = (*head)->prev;
    temp->prev = last;
    last->next = temp;
    __foo(*head);
    *head = temp;
  }
}

int main() {
  const int len = 2;
  const int data = 1;
  DLL* s = dll_circular_create(len, data);
  int i = 0;
  while(i < len) {
    dll_circular_remove_first(&s);
    i++;
  }
  if(0 != s) {
    goto ERROR;
  }
  return 0;
 ERROR: assert(0);
  return 1;
}
