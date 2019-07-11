# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"


extern int __VERIFIER_nondet_int(void);
# 14 "<stdin>"
int main() {

 struct TreeNode {
  struct TreeNode* left;
  struct TreeNode* right;
 };

 struct TreeNode* root = malloc(sizeof(*root)), *n;
 root->left = 0;
 root->right = 0;

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
  }
  if (!n->right && __VERIFIER_nondet_int()) {
   n->right = malloc(sizeof(*n));
   n->right->left = 0;
   n->right->right = 0;
  }
 }

 n = 0;

 struct TreeNode* pred;

 while (root) {
  pred = 0;
  n = root;
  while (n->left || n->right) {
   pred = n;
   if (n->left)
    n = n->left;
   else
    n = n->right;
  }
  if (pred) {
   if (n == pred->left)
    pred->left = 0;
   else
    pred->right = 0;
  } else
   root = 0;

 }

 return 0;

}
