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
# 13 "<stdin>"
# 1 "./stdlib.h" 1




void __foo(void *arg){


}
# 14 "<stdin>" 2

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

  int counter = 0;
  while (counter < 10 || __VERIFIER_nondet_int()) {
    p->h = counter;
    t = malloc(sizeof(struct node));
    if (t == 0) myexit(1);
    p->n = t;
    p = p->n;
    counter++;
  }
  p->h = counter;
  p->n = 0;
  p = a;

  int hasTwo = 0;
  int hasTwelve = 0;

  while (p!=0) {
    if (p->h == 2) {
      hasTwo = 1;
    }

    if (p->h == 12) {
      hasTwelve = 1;
    }
    p = p->n;
  }

  if(!hasTwelve || !hasTwo) {
    ERROR: assert(0);
  }

  return 0;
}
