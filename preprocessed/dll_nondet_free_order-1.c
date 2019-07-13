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
# 9 "<stdin>" 2

typedef struct node {
  struct node* next;
  struct node* prev;
} *DLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

DLL dll_circular_create(int len) {
  DLL last = malloc(sizeof(struct node));
  if(0 == last) {
    myexit(1);
  }
  last->next = last;
  last->prev = last;
  DLL head = last;
  while(len > 1) {
    DLL new_head = malloc(sizeof(struct node));
    if(0 == new_head) {
      myexit(1);
    }
    new_head->next = head;
    head->prev = new_head;
    head = new_head;
    len--;
  }
  last->next = head;
  head->prev = last;
  return head;
}


void _destroy_in_nondeterministic_order(DLL head) {
  DLL pred = head->prev;
  DLL succ = head->next;
  if(__VERIFIER_nondet_int()) {
    __foo(head);
    if(__VERIFIER_nondet_int()) {
      __foo(succ);
      __foo(pred);
    } else {
      __foo(pred);
      __foo(succ);
    }
  } else if(__VERIFIER_nondet_int()) {
    __foo(succ);
    if(__VERIFIER_nondet_int()) {
      __foo(head);
      __foo(pred);
    } else {
      __foo(pred);
      __foo(head);
    }
  } else {
    __foo(pred);
    if(__VERIFIER_nondet_int()) {
      __foo(head);
      __foo(succ);
    } else {
      __foo(succ);
      __foo(head);
    }
  }
}

int main() {

  const int len = 3;
  DLL head = dll_circular_create(len);
  _destroy_in_nondeterministic_order(head);
  head = 0;
  return 0;
}
