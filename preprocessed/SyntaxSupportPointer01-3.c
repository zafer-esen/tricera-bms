# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 1 "./stdlib.h" 1
# 10 "./stdlib.h"
void __foo(void *arg){


}

void abort(void){
  return 1;
}
# 2 "<stdin>" 2





 typedef long unsigned int size_t;


void __foo (void *__ptr);

extern int __VERIFIER_nondet_int(void);

int main() {
 int *p = calloc(sizeof(int));
 while (*p >= 0) {
  (*p)--;
 }
 __foo(p);
 return 0;
}
