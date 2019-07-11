extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern int __VERIFIER_nondet_int();
/*
 * Alternating list example: 
 * creats a list with 1s at odd positions and 2s at even ones. 
 * Then, it goes through and checks if the alternation holds.
 */
#include <stdlib.h>

typedef struct node {
  int h;
  struct node *n;
} List;

void myexit(int s) {
	_EXIT: goto _EXIT;
}

int main() {
  int flag = 1;
  
  /* Build a list of the form (1->2)*->0 */
  List* a = malloc(sizeof(struct node));
  if (a == 0) myexit(1);
  List* t = NULL;
  List* p = a;
  while (__VERIFIER_nondet_int()) {
    if (flag) {
      p->h = 1;
      flag = 0;
    } else {
      p->h = 2;
      flag = 1;
    }
    t = malloc(sizeof(struct node));
    if (t == 0) myexit(1);
    p->n = t;
    p = p->n;
  }
  p->h = 3;

  /* Check it */
  p = a;
  flag = 1;
  while (p->h != 3) {
    if (flag) {
      flag = 0;
      if (p->h != 1)
	goto ERROR;
    } else {
      flag = 1;
      if (p->h != 2)
	goto ERROR;
    }
    p = p->n;
  }

  /* Destroy the list */
  p = a;
  while (p->h != 3) {
    List* tmp = p;
    p = p->n;
    free(tmp);
  }
  free(p);

  return 0;

  ERROR: assert(0); //__VERIFIER_error();
    return 1;
}
