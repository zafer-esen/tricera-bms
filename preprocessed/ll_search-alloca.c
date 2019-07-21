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
# 10 "<stdin>"
extern int __VERIFIER_nondet_int();

typedef struct node {
    int val;
    struct node* next;
} node_t;


node_t* init_ll (int n)
{
  node_t* head = 0;
  node_t* curr;

  int i;
  for (i = 0; i < n; i++) {
    curr = calloc(sizeof(node_t));
    curr->val = i;
    curr->next = head;
    head = curr;
  }
  return head;
}

void safe_search (node_t* head, int i)
{
  node_t* curr = head;
  while (curr != 0 && curr->val != i) {
    curr = curr->next;
  }
}

int main ()
{
  int n = __VERIFIER_nondet_int();
  if (n < 1) {
      return 0;
  }
  node_t* head = init_ll(n);
  int m = __VERIFIER_nondet_int();
  if (m < 0) {
      return 0;
  }
  safe_search(head, m % n);
  return 0;
}
