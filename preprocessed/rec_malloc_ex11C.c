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

int rec(int *op) {
 if(*op < 0) {
  int r = *op;
  free(op);
  return r;
 }
 int *ip = malloc(sizeof(int));

 *ip = (*op) - 1;

 int res = rec(ip);

 free(op);

 return res;


}

int main() {
 int *qq = malloc(sizeof(int));
 *qq = __VERIFIER_nondet_int();

 while (*qq > 1) {
  int *pp = malloc(sizeof(int));
  *pp = __VERIFIER_nondet_int();

  if(*pp < 0) {
   return 0;
  }

  *qq += (rec(pp) == -1 ? -1 : 1);
 }

 free(qq);

}
