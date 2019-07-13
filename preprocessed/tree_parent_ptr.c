# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
extern int __VERIFIER_nondet_int(void);
# 12 "<stdin>"
# 1 "./stdlib.h" 1




void __foo(void *arg){


}
# 13 "<stdin>" 2

int main() {

 struct TreeNode {
  struct TreeNode* left;
  struct TreeNode* right;
  struct TreeNode* parent;
 };

 struct StackItem {
  struct StackItem* next;
  struct TreeNode* node;
 };

 struct TreeNode* root = malloc(sizeof(*root)), *n;
 root->left = 0;
 root->right = 0;
 root->parent = 0;

 while (__VERIFIER_nondet_int()) {
  n = root;
  while (n->left && n->right) {
   if (__VERIFIER_nondet_int())
    n = n->left;
   else
    n = n->right;
  }
  if (!n->left && __VERIFIER_nondet_int()) {
   n->left = malloc(sizeof(*n));
   n->left->left = 0;
   n->left->right = 0;
   n->left->parent = n;
  }
  if (!n->right && __VERIFIER_nondet_int()) {
   n->right = malloc(sizeof(*n));
   n->right->left = 0;
   n->right->right = 0;
   n->right->parent = n;
  }
 }

 n = 0;

 struct StackItem* s = malloc(sizeof(*s)), *st;
 s->next = 0;
 s->node = root;

 while (s != 0) {
  st = s;
  s = s->next;
  n = st->node;
  __foo(st);
  if (n->left) {
   st = malloc(sizeof(*st));
   st->next = s;
   st->node = n->left;
   s = st;
  }
  if (n->right) {
   st = malloc(sizeof(*st));
   st->next = s;
   st->node = n->right;
   s = st;
  }
  __foo(n);
 }

 return 0;
}
