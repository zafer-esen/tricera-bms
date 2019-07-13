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
# 14 "<stdin>"
void myexit(int s) {
 _EXIT: goto _EXIT;
}

typedef struct node {
  int h;
  int flag;
  struct node *n;
} *List;

int main() {
  List p, a, t;




  a = malloc(sizeof(struct node));
  if (a == 0) myexit(1);
  p = a;

  int i = 0;
  while (i < 20 && __VERIFIER_nondet_int()) {
    i++;

    p->flag = __VERIFIER_nondet_int();

    if (p->flag) {
      p->h = 1;
    } else {
      p->h = 2;
    }

    t = malloc(sizeof(struct node));

    if (t == 0) myexit(1);

    p->n = t;
    p = p->n;
  }
  p->h = 3;


  p = a;

  while (p->h != 3) {
    if (p->flag) {
        if (p->h != 1)
            goto ERROR;
    } else {
        if (p->h != 2)
            goto ERROR;
    }
    p = p->n;
    i++;
  }

  if (p->h != 3 || i > 20)
    goto ERROR;


  p = a;
  while (p->n != 0) {
    t = p->n;
    __foo(p);
    p = t;
  }
  __foo(p);

  return 0;

  ERROR: assert(0);
}
