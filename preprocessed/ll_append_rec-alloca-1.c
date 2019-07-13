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



node_t* new_ll(int n)
{
  if (n == 0)
    return 0;
  node_t* head = malloc(sizeof(node_t));
  head->val = n;
  head->next = new_ll(n-1);
  return head;
}

int length(node_t* xs)
{
  if (xs == 0)
    return 0;
  return (1 + length(xs->next));
}

node_t* append(node_t* x, node_t* y)
{
  if (x == 0)
    return y;
  x->next = append(x->next, y);
  return x;
}

int main ()
{
  int n = __VERIFIER_nondet_int();
  if (n < 1) {
      return 0;
  }
  node_t* x = new_ll(n - 1);
  node_t* y = new_ll(n);
  node_t* z = append(x, y);
  int z_length = length(z);
  return 0;
}
