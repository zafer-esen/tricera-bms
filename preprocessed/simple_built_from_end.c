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

void myexit(int s) {
 _EXIT: goto _EXIT;
}

typedef struct node {
  int h;
  struct node *n;
} *List;

int main() {

  List t;
  List p = 0;
  while (__VERIFIER_nondet_int()) {
    t = malloc(sizeof(struct node));
    if (t == 0) myexit(1);
    t->h = 1;
    t->n = p;
    p = t;
  }
  while (p!=0) {
    if (p->h != 1) {
 ERROR: assert(0);
    }
    p = p->n;
  }

}
