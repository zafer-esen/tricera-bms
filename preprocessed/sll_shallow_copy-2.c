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







struct node {
  struct node* next;
};

void myexit(int s) {
 _EXIT: goto _EXIT;
}

struct node* alloc_node() {
  struct node* temp = malloc(sizeof(struct node));
  if(0 == temp) {
    myexit(1);
  }
  return temp;
}

int main() {

  struct node* s = alloc_node();
  s->next = alloc_node();


  *s = *(s->next);
  __foo(s);

  return 0;
}
