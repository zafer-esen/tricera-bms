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

extern int __VERIFIER_nondet_int();
# 12 "<stdin>"
typedef struct node {
  struct node* next;
} SLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

SLL* sll_create(int len) {
  SLL* head = 0;
  while(len-- > 0) {
    SLL* new_head = calloc(sizeof(struct node));
    if(0 == new_head) {
      myexit(1);
    }
    new_head->next = head;
    head = new_head;
  }
  return head;
}

int sll_length(SLL* head) {
  int len = 0;
  while(head) {
    len++;
    head = head->next;
  }
  return len;
}

void sll_destroy(SLL* head) {
  while(head) {
    SLL* temp = head->next;
    __foo(head);
    head = temp;
  }
}

void sll_insert(SLL** head, int position) {
  SLL* new_node = calloc(sizeof(struct node));
  if(0 == new_node) {
    myexit(1);
  }
  SLL* second_to_last = 0;
  SLL* last = *head;
  while(position-- > 0) {
    second_to_last = last;
    last = last->next;
  }
  new_node->next = last;
  if(second_to_last) {
    second_to_last->next = new_node;
  } else {
    *head = new_node;
  }
}

int _get_nondet_int(int from, int until) {
  int len = from;
  while(len < until && __VERIFIER_nondet_int()) {
    len++;
  }
  return len;
}

int main() {
  const int len = _get_nondet_int(2, 5);
  SLL* s = sll_create(len);
  const int k = _get_nondet_int(0, len - 1);
  int i = 0;

  while(i < k && __VERIFIER_nondet_int()) {

    int position = _get_nondet_int(0, i + (len - 1));
    sll_insert(&s, position);
    i++;
  }
  if(k + len != sll_length(s)) {
    goto ERROR;
  }
  sll_destroy(s);
  return 0;
 ERROR: assert(0);
  return 1;
}
