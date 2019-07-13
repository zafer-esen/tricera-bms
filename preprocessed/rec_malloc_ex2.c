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

int rec(int *p, int *up) {
 if(*p < 0) {
  int pv = *p;
  __foo(p);
  __foo(up);
  return pv;
 }
 int *upn = malloc(sizeof(int));
 (*p)--;
 return rec(p,upn);
}

int main() {
 int *ip = malloc(sizeof(int));
 *ip = __VERIFIER_nondet_int();
 while (*ip > 1) {
  int *op = malloc(sizeof(int));
  *op = *ip;
  (*ip) += rec(op,ip);
 }
}
