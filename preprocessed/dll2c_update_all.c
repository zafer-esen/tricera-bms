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
  struct node *next;
  struct node *prev;
  int data;
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

DLL dll_circular_create(int len, int data) {
  DLL head = node_create(data);
  DLL last = head;
  while(len > 1) {
    DLL new_head = node_create(data);
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

void dll_circular_destroy(DLL head) {
  if(0 != head) {
    DLL p = head->next;
    while(p != head) {
      DLL q = p->next;
      __foo(p);
      p = q;
    }
    __foo(head);
  }
}

int dll_circular_get_data_at(DLL head, int index) {
  while(index > 0) {
    head = head->next;
    index--;
  }
  return head->data;
}

void dll_circular_update_at(DLL head, int data, int index) {
  while(index > 0) {
    head = head->next;
    index--;
  }
  head->data = data;
}

int main() {
  const int len = 2;
  const int data = 1;
  DLL s = dll_circular_create(len, data);
  int i = 0;
    for(i = 0; i < len; i++) {
    int new_data = i + len;
    dll_circular_update_at(s, new_data, i);
  }
  for(i = 0; i < len; i++) {
    int expected = i + len;
    if(expected != dll_circular_get_data_at(s, i)) {
      goto ERROR;
    }
  }
  dll_circular_destroy(s);
  return 0;
 ERROR: assert(0);
  return 1;
}
