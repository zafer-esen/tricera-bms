# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 13 "<stdin>"
extern int __VERIFIER_nondet_int();

typedef struct node {
  int val;
  struct node* next;
} node_t;



node_t* new_ll(unsigned int n)
{
  if (n == 0)
    return 0;
  node_t* head = malloc(sizeof(node_t));
  head->val = n;
  head->next = new_ll(n-1);
  return head;
}

int main ()
{
  int n = __VERIFIER_nondet_int();
  node_t* head = new_ll(n);
  return 0;
}
