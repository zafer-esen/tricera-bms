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

void f( int *q, int *r) ;
void g(int *p, int *s);


void f( int *q, int *r) {
 __foo(r);
 if(*q < 0) {
  return;
 }

 int *s = malloc(sizeof(int));

 (*q)--;
 g(q,s);
}


void g(int *p, int *s) {
 __foo(s);
 if(*p < 0)
  return;


 int *r = malloc(sizeof(int));

 f(p,r);
}


int main() {
 int *p1 = malloc(sizeof(int));
 int *p2 = malloc(sizeof(int));

 *p1 = __VERIFIER_nondet_int();


 f(p1,p2);

 __foo(p1);


}
