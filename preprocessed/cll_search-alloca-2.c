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
# 10 "<stdin>"
extern int __VERIFIER_nondet_int();

typedef struct node {
  int val;
  struct node* next;
} node_t;


node_t* init_cll (int n)
{
  node_t* head;
  node_t* curr = malloc(sizeof(node_t));

  curr->val = 0;
  head = curr;

  int i;
  for (i = 1; i < n; i++) {
    node_t* next_node = malloc(sizeof(node_t));
    next_node->val = i;
    curr->next = next_node;
    curr = next_node;
  }

  curr->next = head;
  return head;
}

void search (node_t* head, int i)
{
  node_t* curr = head;
  while (curr->val != i) {
    curr = curr->next;
  }
}


int main ()
{
  int n = __VERIFIER_nondet_int();
  node_t* head = init_cll(n);
  search(head, __VERIFIER_nondet_int());
  return 0;
}
