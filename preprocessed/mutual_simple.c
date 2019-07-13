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


extern int __VERIFIER_nondet_int(void);

void f( int *q) ;
void g(int *p);


void f( int *q) {
 if(*q < 0)
  return;

 (*q)--;
 g(q);
}


void g(int *p) {
 if(*p < 0)
  return;

 f(p);
}


int main() {
 int *p1 = malloc(sizeof(int));


 *p1 = __VERIFIER_nondet_int();



 f(p1);

 __foo(p1);


}
