# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 1 "./stdlib.h" 1



void free(){


}
# 2 "<stdin>" 2

extern int __VERIFIER_nondet_int(void);

int rec(int *p) {
 if(*p < 0) {
  int pv = *p;
  free(p);
  return pv;
 }
 (*p)--;
 return rec(p);
}

int main() {
 int i = __VERIFIER_nondet_int();
 while (i > 0) {
  int *op = malloc(sizeof(int));
  *op = __VERIFIER_nondet_int();
  i += rec(op);
 }
}
