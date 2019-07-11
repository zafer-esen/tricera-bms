# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 10 "<stdin>"
typedef struct node {
  struct node *next;
  int data;
} *SLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

SLL node_create(int data) {
  SLL temp = malloc(sizeof(struct node));
  if(0 == temp) {
    myexit(1);
  }
  temp->next = 0;
  temp->data = data;
  return temp;
}

SLL sll_circular_create(int len, int data) {
  SLL head = node_create(data);
  SLL last = head;
  while(len > 1) {
    SLL new_head = node_create(data);
    new_head->next = head;
    head = new_head;
    len--;
  }
  last->next = head;
  return head;
}

void sll_circular_destroy(SLL head) {
  if(0 != head) {
    SLL p = head->next;
    while(p != head) {
      SLL q = p->next;

      p = q;
    }

  }
}

void sll_circular_append(SLL* head, int data) {
  SLL new_last = node_create(data);
  if(0 == *head) {
    new_last->next = new_last;
    *head = new_last;
  } else {
    SLL last = *head;
    while(last->next != *head) {
      last = last->next;
    }
    last->next = new_last;
    new_last->next = *head;
  }
}

int main(void) {

  const int len = 2;
  const int data = 1;
  SLL s = sll_circular_create(len, data);

  sll_circular_append(&s, data);

  SLL ptr = s;
  int count = 0;
  do {
    if(data != ptr->data) {
      goto ERROR;
    }
    ptr = ptr->next;
    count++;
  } while(ptr != s);
  if(count != 1 + len) {
    goto ERROR;
  }

  sll_circular_destroy(s);
  return 0;
 ERROR: assert(0);
  return 1;
}
