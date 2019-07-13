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
# 11 "<stdin>"
typedef struct node {
  struct node* next;
  int data;
} *SLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

SLL sll_circular_create(int len, int data) {
  SLL const last = malloc(sizeof(struct node));
  if(0 == last){
    myexit(1);
  }
  last->next = last;
  last->data = data;
  SLL head = last;
  while(len > 1) {
    SLL new_head = malloc(sizeof(struct node));
    if(0 == new_head){
      myexit(1);
    }
    new_head->next = head;
    new_head->data = data;
    head = new_head;
    len--;
  }
  last->next = head;
  return head;
}

int main() {
  const int len = 5;
  const int data_init = 1;
  SLL const head = sll_circular_create(len, data_init);

  int data_new = 1;
  SLL ptr = head;
  do {
    if(data_init != ptr->data) {
      goto ERROR;
    }
    ptr->data = data_new;
    ptr = ptr->next;
    data_new++;
  } while(ptr != head);

  data_new = data_new - len;
  do {
    if(data_new != ptr->data) {
      goto ERROR;
    }
    SLL temp = ptr->next;
    __foo(ptr);
    ptr = temp;
    data_new++;

  } while(ptr != 0);
  return 0;
 ERROR: assert(0);
  return 1;
}
