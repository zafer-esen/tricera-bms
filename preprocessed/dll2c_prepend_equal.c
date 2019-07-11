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
  struct node *prev;
  int data;
} *DLL;

void myexit(int s) {
 _EXIT: goto _EXIT;
}

DLL node_create(int data) {
  DLL temp = malloc(sizeof(struct node));
  if(0 == temp) {
    myexit(1);
  }
  temp->next = 0;
  temp->prev = 0;
  temp->data = data;
  return temp;
}

DLL dll_circular_create(int len, int data) {
  DLL head = node_create(data);
  DLL last = head;
  while(len > 1) {
    DLL new_head = node_create(data);
    new_head->next = head;
    if(head) {
      head->prev = new_head;
    }
    head = new_head;
    len--;
  }
  last->next = head;
  head->prev = last;
  return head;
}

void dll_circular_destroy(DLL head) {
  if(0 != head) {
    DLL p = head->next;
    while(p != head) {
      DLL q = p->next;

      p = q;
    }

  }
}

void dll_circular_prepend(DLL* head, int data) {
  DLL new_head = node_create(data);
  if(0 == *head) {
    *head = new_head;
    new_head->next = new_head;
    new_head->prev = new_head;
  } else {
    DLL last = (*head)->prev;
    DLL old_head = *head;
    *head = new_head;
    new_head->next = old_head;
    old_head->prev = new_head;
    last->next = new_head;
    new_head->prev = last;
  }
}

int main(void) {

  const int len = 2;
  const int data = 1;
  DLL s = dll_circular_create(len, data);

  dll_circular_prepend(&s, data);

  DLL ptr = s;
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

  dll_circular_destroy(s);
  return 0;
 ERROR: assert(0);
  return 1;
}
