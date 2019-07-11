/*
 * Date: 30/09/2015
 * Created by: Ton Chanh Le (chanhle@comp.nus.edu.sg)
 */
 
#include <stdlib.h>


extern int __VERIFIER_nondet_int();

typedef struct node {
    int val;
    struct node* next;
} node_t;

//Initialize a null-terminating linked list with length n
node_t* init_ll (int n)
{
  node_t* head = NULL;
  node_t* curr;
  
  for (int i = 0; i < n; i++) {
    curr = malloc(sizeof(node_t));
    curr->val = i;
    curr->next = head;
    head = curr;
  }
  return head;
}

void safe_search (node_t* head, int i)
{
  node_t* curr = head;
  while (curr != NULL && curr->val != i) {
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



