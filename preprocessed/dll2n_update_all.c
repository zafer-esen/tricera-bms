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
# 7 "<stdin>" 2

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

void dll_destroy(DLL head) {
  while(head) {
    DLL temp = head->next;
    __foo(head);
    head = temp;
  }
}

int dll_get_data_at(DLL head, int index) {
  while(index > 0) {
    head = head->next;
    index--;
  }
  return head->data;
}

void dll_update_at(DLL head, int data, int index) {
  while(index > 0) {
    head = head->next;
    index--;
  }
  head->data = data;
}

int main() {
  const int len = 2;
  const int data = 1;
  DLL s = dll_create(len, data);
  int i;
  for(i = 0; i < len; i++) {
    int new_data = i + len;
    dll_update_at(s, new_data, i);
  }
  for(i = 0; i < len; i++) {
    int expected = i + len;
    if(expected != dll_get_data_at(s, i)) {
      goto ERROR;
    }
  }
  dll_destroy(s);
  return 0;
 ERROR: assert(0);
  return 1;
}
