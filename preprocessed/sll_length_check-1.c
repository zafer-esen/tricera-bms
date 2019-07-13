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







typedef struct node {
  struct node* next;
} *SLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

SLL sll_create(int len) {
  SLL head = 0;
  while(len > 0) {
    SLL new_head = malloc(sizeof(struct node));
    if(0 == new_head) {
      myexit(1);
    }
    new_head->next = head;
    head = new_head;
    len--;
  }
  return head;
}

int sll_length(SLL head) {
  int len = 0;
  while(head) {
    len++;
    head = head->next;
  }
  return len;
}

void sll_destroy(SLL head) {
  while(head) {
    SLL temp = head->next;
    __foo(head);
    head = temp;
  }
}

int main() {
  int len = 2;
  while(len < 32 && __VERIFIER_nondet_int()) {
    len++;
  }

  SLL s = sll_create(len + 1);
  if(len != sll_length(s)) {
    goto ERROR;
  }
  sll_destroy(s);
  return 0;
 ERROR: assert(0);
  return 1;
}
