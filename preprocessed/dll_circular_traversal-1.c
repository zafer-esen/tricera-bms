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
# 10 "<stdin>"
# 1 "./stdlib.h" 1




void __foo(void *arg){


}
# 11 "<stdin>" 2

typedef struct node {
  int data;
  struct node* next;
  struct node* prev;
} *DLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

DLL dll_circular_create(int len, int data) {
  DLL last = malloc(sizeof(struct node));
  if(0 == last){
    myexit(1);
  }
  last->next = last;
  last->prev = last;
  last->data = data;
  DLL head = last;
  while(len > 1) {
    DLL new_head = malloc(sizeof(struct node));
    if(0 == new_head) {
      myexit(1);
    }
    new_head->next = head;
    new_head->data = data;
    head->prev = new_head;
    head = new_head;
    len--;
  }
  last->next = head;
  head->prev = last;
  return head;
}

int main() {
  const int len = 5;
  const int data_init = 1;
  DLL head = dll_circular_create(len, data_init);

  DLL ptr = head;
  int data_new = 1;
  do {
    if(data_init != ptr->data) {
      goto ERROR;
    }
    ptr->data = data_new;
    ptr = ptr->next;
    data_new++;
  } while(ptr != head);

  ptr = ptr->prev;


  head = 0;
  do {
    data_new--;
    if(data_new != ptr->data) {
      goto ERROR;
    }
    DLL temp = ptr->prev;
    __foo(ptr);
    ptr = temp;
  } while(ptr != 0);
  return 0; assert(0);
 ERROR: return 1;
}
