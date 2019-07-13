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

int* f(int *q, int v);
int* g(int *p);






int* f( int *q, int v) {
 if(v < 0) {
  __foo(q);
  return malloc(sizeof(int));
 }

 int *tmp = malloc(sizeof(int));
 *tmp = v+1;

 return f(g(tmp),v-1);

}





int* g(int *p) {
 if(*p < 0) {
  __foo(p);
  return malloc(sizeof(int));
 }

 (*p)--;


 int *np = g(p);


 __foo(np);


 return malloc(sizeof(int));


}


int main() {

 int *p1 = malloc(sizeof(int));
 int *p2 = malloc(sizeof(int));


 *p1 = __VERIFIER_nondet_int();
 *p2 = __VERIFIER_nondet_int();

 if(*p1 < 0 || *p2 < 0)
  return 0;

 f(p1,*p2);

 __foo(p1);


}
