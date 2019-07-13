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

extern int __VERIFIER_nondet_int();






# 1 "./stdlib.h" 1




void __foo(void *arg){


}
# 11 "<stdin>" 2

typedef struct node {
  int data_0;
  struct node* next;
  int data_1;
  struct node* prev;
  int data_2;
} *DLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

DLL dll_create(int len) {
  DLL head = 0;
  while(len > 0) {
    DLL new_head = malloc(sizeof(struct node));
    if(0 == new_head) {
      myexit(1);
    }
    new_head->data_0 = 0;
    new_head->data_1 = 0;

    new_head->data_2 = __VERIFIER_nondet_int() == len? 1 : 0;
    new_head->next = head;
    new_head->prev = 0;
    if(head) {
      head->prev = new_head;
    }
    head = new_head;
    len--;
  }
  return head;
}

int main() {
  const int len = 5;
  DLL head = dll_create(len);

  while(head->next) {
    if(0 != head->data_0 || 0 != head->data_1 || 0 != head->data_2) {
      goto ERROR;
    }
    head = head->next;
  }

  while(head) {
    DLL temp = head->prev;
    if(0 != head->data_0 || 0 != head->data_1 || 0 != head->data_2) {
      goto ERROR;
    }
    __foo(head);
    head = temp;
  }
  return 0;
 ERROR: assert(0);
  return 1;
}
