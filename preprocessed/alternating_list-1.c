# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"


extern int __VERIFIER_nondet_int();





# 1 "./stdlib.h" 1




void __foo(void *arg){


}
# 10 "<stdin>" 2

typedef struct node {
  int h;
  struct node *n;
} List;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

int main() {
  int flag = 1;


  List* a = malloc(sizeof(struct node));
  if (a == 0) myexit(1);
  List* t = 0;
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


  p = a;
  while (p->h != 3) {
    List* tmp = p;
    p = p->n;
    __foo(tmp);
  }
  __foo(p);

  return 0;

  ERROR: assert(0);
    return 1;
}
