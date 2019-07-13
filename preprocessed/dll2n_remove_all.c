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





# 1 "./stdlib.h" 1




void __foo(void *arg){


}
# 8 "<stdin>" 2

typedef struct node {
  int data;
  struct node* next;
  struct node* prev;
} *DLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

DLL node_create(int data) {
  DLL temp = malloc(sizeof(struct node));
  if(0 == temp) {
    myexit(1);
  }
  temp->next = 0;
  temp->prev = 0;
  temp->data = data;
  return temp;
}

DLL dll_create(int len, int data) {
  DLL head = 0;
  while(len > 0) {
    DLL new_head = malloc(sizeof(struct node));
    if(0 == new_head) {
      myexit(1);
    }
    new_head->data = data;
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

void dll_remove_first(DLL* head) {
  DLL temp = (*head)->next;
  if(temp) {
    temp->prev = 0;
  }
  __foo(*head);
  *head = temp;
}

int main() {
  const int len = 2;
  const int data = 1;
  DLL s = dll_create(len, data);
  int i;
  for(i = len - 1; i >= 0; i--) {
    dll_remove_first(&s);
  }
  if(0 != s) {
    goto ERROR;
  }
  return 0;
 ERROR: assert(0);
  return 1;
}
