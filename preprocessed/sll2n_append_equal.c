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
} SLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

SLL* node_create(int data) {
  SLL* temp = malloc(sizeof(struct node));
  if(0 == temp) {
    myexit(1);
  }
  temp->next = 0;
  temp->data = data;
  return temp;
}

SLL* sll_create(int len, int data) {
  SLL* head = 0;
  for(; len > 0; len--) {
    SLL* new_head = node_create(data);
    new_head->next = head;
    head = new_head;
  }
  return head;
}

void sll_destroy(SLL* head) {
  while(head) {
    SLL* temp = head->next;
    __foo(head);
    head = temp;
  }
}

void sll_append(SLL** head, int data) {
  SLL* new_last = node_create(data);
  if(0 == *head) {
    *head = new_last;
  } else {
    SLL* last = *head;
    while(last->next) {
      last = last->next;
    }
    last->next = new_last;
  }
}

int main() {

  const int len = 2;
  const int data = 1;
  SLL* s = sll_create(len, data);

  sll_append(&s, data);

  SLL* ptr = s;
  int count = 0;
  while(ptr) {
    SLL* temp = ptr->next;
    if(data != ptr->data) {
      goto ERROR;
    }
    ptr = temp;
    count++;
  }
  if(count != 1 + len) {
    goto ERROR;
  }

  sll_destroy(s);

  return 0;
 ERROR: assert(0);
  return 1;
}
