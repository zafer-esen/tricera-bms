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


extern int __VERIFIER_nondet_int();
# 13 "<stdin>"
void myexit(int s) {
  _EXIT: goto _EXIT;
}

typedef struct node {
  int h;
  struct node *n;
} *List;

int main() {

  int i = 0;
  int y = 0;


  List a = malloc(sizeof(struct node));

  if (a == 0) myexit(1);

  List t;
  List p = a;
  while (i < 10 && __VERIFIER_nondet_int()) {
    i++;
    p->h = 1;
    t = malloc(sizeof(struct node));

    if (t == 0) myexit(1);

    p->n = t;
    p = p->n;
  }
  while (y < 10 && __VERIFIER_nondet_int()) {
    y++;
    p->h = 2;
    t = malloc(sizeof(struct node));

    if (t == 0) myexit(1);

    p->n = t;
    p = p->n;
  }
  p->h = 3;

  i = 0;
  y = 0;


  p = a;
  while (p->h == 1) {
    i++;
    p = p->n;
  }
  while (p->h == 2) {
    y++;
    p = p->n;
  }

  if(p->h != 3 || (i + y) < 20)
    ERROR: assert(0);


  p = a;
  while (p->n != 0) {
    t = p->n;
    __foo(p);
    p = t;
  }
  __foo(p);

  return 0;
}
