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
extern int __VERIFIER_nondet_int(void);
# 15 "<stdin>"
typedef struct TListNode
{
 struct TListNode* next;
} ListNode;

typedef struct TTreeNode
{
 struct TTreeNode* left;
 struct TTreeNode* right;
 ListNode* list;
} TreeNode;

int main()
{
 TreeNode* tree = malloc(sizeof(TreeNode));
 TreeNode* tmp;
 ListNode* tmpList;

 tree->left = 0;
 tree->right = 0;
 tree->list = malloc(sizeof(ListNode));
 tree->list->next = tree->list;

 while (__VERIFIER_nondet_int())
 {
  tmpList = malloc(sizeof(ListNode));
  tmpList->next = tree->list->next;
  tree->list->next = tmpList;
 }

 while (__VERIFIER_nondet_int())
 {
  tmp = tree;

  while ((0 != tmp->left) && (0 != tmp->right))
  {
   if (__VERIFIER_nondet_int())
   {
    tmp = tmp->left;
   }
   else
   {
    tmp = tmp->right;
   }
  }

  TreeNode* newNode;
  if ((0 == tmp->left) && __VERIFIER_nondet_int())
  {
   newNode = malloc(sizeof(TreeNode));
   tmp->left = newNode;
  }
  else if ((0 == tmp->right) && __VERIFIER_nondet_int())
  {
   newNode = malloc(sizeof(TreeNode));
   tmp->right = newNode;
  }
  else
  {
   continue;
  }

  newNode->left = 0;
  newNode->right = 0;
  newNode->list = malloc(sizeof(ListNode));
  newNode->list->next = newNode->list;

  while (__VERIFIER_nondet_int())
  {
   tmpList = malloc(sizeof(ListNode));
   tmpList->next = tree->list->next;
   tree->list->next = tmpList;
  }
 }

 while (0 != tree)
 {
  tmp = tree;
  TreeNode* pred = 0;

  while ((0 != tmp->left) || (0 != tmp->right))
  {
   pred = tmp;
   if (0 != tmp->left)
   {
    tmp = tmp->left;
   }
   else
   {
    tmp = tmp->right;
   }
  }

  if (0 != pred)
  {
   if (tmp == pred->left)
   {
    pred->left = 0;
   }
   else
   {
    pred->right = 0;
   }
  }
  else
  {
   tree = 0;
  }

  while (tmp->list != tmp->list->next)
  {
   tmpList = tmp->list->next;
   tmp->list->next = tmpList->next;
   __foo(tmpList);
  }

  __foo(tmp->list);
  __foo(tmp);
 }

 return 0;
}
