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

void rec(int *op, int i) {
 if(i < 0) {
  (*op)--;
  return;
 }
 int *ip = malloc(sizeof(int));
 *ip = __VERIFIER_nondet_int();

 rec(ip,i-1);

 __foo(ip);

}

int main() {
 int *pp = malloc(sizeof(int));
 int *qq = malloc(sizeof(int));

 *pp = __VERIFIER_nondet_int();
 *qq = __VERIFIER_nondet_int();
 while (*qq > 1) {
  *pp = *qq;
  *qq = -1;
  rec(pp,*pp);
  *qq = *qq + *pp;
 }

 __foo(pp);
 __foo(qq);

}
