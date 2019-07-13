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







typedef struct node {
  struct node *next;
  int data;
} *SLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

SLL node_create(int data) {
  SLL temp = malloc(sizeof(struct node));
  if(0 == temp) {
    myexit(1);
  }
  temp->next = 0;
  temp->data = data;
  return temp;
}

SLL sll_circular_create(int len, int data) {
  SLL head = node_create(data);
  SLL last = head;
  while(len > 1) {
    SLL new_head = node_create(data);
    new_head->next = head;
    head = new_head;
    len--;
  }
  last->next = head;
  return head;
}

void sll_circular_remove_first(SLL* head) {
  SLL temp = (*head)->next;
  if(temp == *head) {
    __foo(*head);
    *head = 0;
  } else {
    SLL last = *head;
    while(last->next != *head) {
      last = last->next;
    }
    last->next = temp;
    __foo(*head);
    *head = temp;
  }
}

int main() {
  const int len = 2;
  const int data = 1;
  SLL s = sll_circular_create(len, data);
  int i = 0;
  while(i < len) {
    sll_circular_remove_first(&s);
    i++;
  }
  if(0 != s) {
    goto ERROR;
  }
  return 0;
 ERROR: assert(0);
  return 1;
}
