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
# 12 "<stdin>"
extern int __VERIFIER_nondet_int();

typedef struct node {
  int val;
  struct node* next;
} node_t;

node_t* new_lseg(node_t* p, int n)
{
  if (n==0)
    return p;
  node_t* x = malloc(sizeof(node_t));
  x->val = n;
  x->next = new_lseg(p, n-1);
  return x;
}


node_t* new_cll(int n)
{
  node_t* x = malloc(sizeof(node_t));
  x->val = n;
  x->next = new_lseg(x,n-1);
  return x;
}

void traverse (node_t* head)
{
  node_t* curr = head;
  while (curr != 0) {
    curr = curr->next ;
  }
}

int main ()
{
  node_t* x = new_cll(0);
  return 0;
}
