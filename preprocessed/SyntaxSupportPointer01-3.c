# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"





 typedef long unsigned int size_t;


void free (void *__ptr);

extern int __VERIFIER_nondet_int(void);

int main() {
 int *p = malloc(sizeof(int));
 while (*p >= 0) {
  (*p)--;
 }
 free(p);
 return 0;
}
