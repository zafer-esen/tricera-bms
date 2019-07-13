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
# 1 "./stdlib.h" 1




void __foo(void *arg){


}
# 3 "<stdin>" 2

extern int __VERIFIER_nondet_int(void);

void f(int *p, int *q);
void g(int *p, int *q);


void f(int *p, int *q) {
 if(*p + *q < 0)
  return;


 int *np = malloc(sizeof(int));

 *np = *p - 1;

 __foo(p);

 g(q,np);



}


void g(int *p, int *q) {
 if(*p + *q < 0)
  return;


 f(q,p);


}


int main() {

 int *p1 = malloc(sizeof(int));
 int *p2 = malloc(sizeof(int));

 *p1 = __VERIFIER_nondet_int();
 *p2 = __VERIFIER_nondet_int();

 f(p1,p2);


}
