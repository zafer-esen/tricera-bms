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







typedef struct node {
  int data;
  struct node* next;
  struct node* prev;
} DLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

DLL* node_create(int data) {
  DLL* temp = malloc(sizeof(struct node));
  if(0 == temp) {
    myexit(1);
  }
  temp->next = 0;
  temp->prev = 0;
  temp->data = data;
  return temp;
}

DLL* dll_create(int len, int data) {
  DLL* head = 0;
  while(len > 0) {
    DLL* new_head = malloc(sizeof(struct node));
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

void dll_destroy(DLL* head) {
  while(head) {
    DLL* temp = head->next;
    __foo(head);
    head = temp;
  }
}

void dll_prepend(DLL** head, int data) {
  DLL* new_head = node_create(data);
  new_head->next = *head;
  if(*head) {
    (*head)->prev = new_head;
  }
  *head = new_head;
}

int main() {

  const int len = 2;
  const int data = 1;
  DLL* s = dll_create(len, data);

  const int uneq = 5;
  dll_prepend(&s, uneq);

  DLL* ptr = s;
  if(uneq != ptr->data) {
    goto ERROR;
  }
  ptr = ptr->next;
  int count = 1;
  while(ptr) {
    DLL* temp = ptr->next;
    if(data != ptr->data) {
      goto ERROR;
    }
    ptr = temp;
    count++;
  }
  if(count != 1 + len) {
    goto ERROR;
  }

  dll_destroy(s);

  return 0;
 ERROR: assert(0);
  return 1;
}
