# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"



extern int __VERIFIER_nondet_int(void);
# 13 "<stdin>"
void myexit(int s) {
 _EXIT: goto _EXIT;
}

typedef struct node {
  int h;
  struct node *n;
} *List;

int main() {

  List a = malloc(sizeof(struct node));

  if (a == 0) myexit(1);

  List t;
  List p = a;

  int i = 0;

  while (i < 30 && __VERIFIER_nondet_int()) {
    p->h = i;
    t = malloc(sizeof(struct node));

    if (t == 0) myexit(1);

    p->n = t;
    p = p->n;
    i++;
  }

  p->h = i;
  p->n = 0;
  p = a;
  i = 0;
  while (p!=0) {
    if (p->h != i) {
      ERROR: assert(0);
    }
    p = p->n;
    i++;
  }


  p = a;
  while (p != 0) {
    t = p->n;

    p = t;
  }

  return 0;
}
