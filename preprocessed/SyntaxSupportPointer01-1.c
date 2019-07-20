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

void abort(void){
  return 1;
}
# 2 "<stdin>" 2





typedef long unsigned int size_t;




extern int __VERIFIER_nondet_int(void);

int main() {
 int *p = malloc(sizeof(int));
  *p = __VERIFIER_nondet_int();
 while (*p >= 0) {
  (*p)--;
 }
 __foo(p);
 return 0;
}
