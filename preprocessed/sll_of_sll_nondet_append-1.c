# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"

extern int __VERIFIER_nondet_int();






# 1 "./stdlib.h" 1




void __foo(void *arg){


}
# 10 "<stdin>" 2

typedef struct node {
  struct node* next;
  struct node* inner;
} *SLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

SLL sll_create(int len) {
  SLL head = 0;
  while(len > 0) {
    SLL new_head = malloc(sizeof(struct node));
    if(0 == new_head) {
      myexit(1);
    }
    new_head->next = head;
    head = new_head;
    len--;
  }
  return head;
}

SLL node_create_with_sublist(int sublist_length) {
  SLL new_node = malloc(sizeof(struct node));
  if(0 == new_node) {
    myexit(1);
  }
  new_node->inner = sll_create(sublist_length);
  new_node->next = 0;
  return new_node;
}

int sll_length(SLL head) {
  int len = 0;
  while(head) {
    len++;
    head = head->next;
  }
  return len;
}

void sll_append(SLL* head, int sublist_length) {
  SLL new_last = node_create_with_sublist(sublist_length);
  new_last->next = 0;
  SLL temp = *head;
  if(0 != temp) {
    while(temp->next) {
      temp = temp->next;
    }
    temp->next = new_last;
  } else {
    *head = new_last;
  }
}

void sll_hierarchical_destroy(SLL head) {
 while(head) {
    SLL temp = head->next;
    SLL sub_head = head->inner;
    while(sub_head) {
      SLL temp_2 = sub_head->next;
      __foo(sub_head);
      sub_head = temp_2;
    }
    __foo(head);
    head = temp;
  }
}

int main() {
  const int min = 3;
  const int max = 5;
  int i, j;
  SLL head = 0;
  for(i = min; i <= max; i++) {
    for(j = 0; j < 10 && __VERIFIER_nondet_int(); j++) {
      sll_append(&head, i);
    }
  }
  SLL ptr = head;
  for(i = min; 0 != ptr; i++) {
    if(i > max) {
      goto ERROR;
    }
    while(ptr) {
      int count = sll_length(ptr->inner);
      if(i == count) {
 ptr = ptr->next;
      } else if(3 == i && 5 == count) {
 i++;
 break;
      } else if(i + 1 == count && i < max) {
 break;
      } else {
 goto ERROR;
      }
    }
  }
  sll_hierarchical_destroy(head);
  return 0;
 ERROR: assert(0);
  return 1;
}
