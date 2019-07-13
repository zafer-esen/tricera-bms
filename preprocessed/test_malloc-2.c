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


void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: assert(0);
  }
  return;
}
# 1 "./assert.h" 1
# 11 "<stdin>" 2
# 1 "./malloc.h" 1
# 12 "<stdin>" 2
# 22 "<stdin>"
int CURRENTLY_UNSAFE;


int main(void) {






 int a,b;
 int *p1=&a;
 int *p2=&b;

 if(p1!=0 && p2!=0) {
  __VERIFIER_assert(p1!=p2);
 }
 return 0;
}
