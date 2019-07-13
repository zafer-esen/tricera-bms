# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"


extern int __VERIFIER_nondet_int();
# 12 "<stdin>"
# 1 "./stdlib.h" 1



void free(){


}
# 13 "<stdin>" 2

void myexit(int s) {
 _EXIT: goto _EXIT;
}

typedef struct node {
  int h;
  struct node *n;
} *List;

int main() {
  int flag = 1;


  List a = malloc(sizeof(struct node));
  if (a == 0) myexit(1);
  List t;
  List l1;
  List l2;
  List b;
  List u;
  List p = a;
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

  if (a->h == 3) return 0;

  flag = 1;
  l1 = 0;
  l2 = 0;
  p = a;
  while (p->h != 3) {
    t = p;
    p = p->n;
    if (flag) {
      t->n = l1;
      l1 = t;
      flag = 0;
    } else {
      t->n = l2;
      l2 = t;
      flag = 1;
    }
  }


  p = l1;
  while (p != 0) {
    if (p->h != 2) goto ERROR;
    p = p->n;
  }
  p = l2;
  while (p != 0) {
    if (p->h != 1) goto ERROR;
    p = p->n;
  }

  return 0;

  ERROR: assert(0); return 1;

}
