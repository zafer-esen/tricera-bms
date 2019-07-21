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
# 14 "<stdin>"
void myexit(int s) {
 _EXIT: goto _EXIT;
}

typedef struct node {
  int h;
  struct node *n;
} List;

int main() {
  int flag = __VERIFIER_nondet_int();
  List *p, *a, *t;




  a = calloc(sizeof(struct node));
  if (a == 0) myexit(1);
  p = a;
  while (__VERIFIER_nondet_int()) {
    if (flag) {
      p->h = 1;
    } else {
      p->h = 2;
    }


    t = calloc(sizeof(struct node));
    if (t == 0) myexit(1);
    p->n = t;
    p = p->n;
  }
  p->h = 3;


  p = a;
  if (flag)
    while (p->h == 2)
      p = p->n;
  else
    while (p->h == 1)
      p = p->n;
  if (p->h != 3)
    ERROR: assert(0);
}
