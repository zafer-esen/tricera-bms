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
# 7 "<stdin>" 2

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
      __foo(p);
      p = q;
    }
    __foo(head);
  }
}

void dll_circular_insert(DLL* head, int data, int index) {
  DLL new_node = node_create(data);
  DLL snd_to_last = 0;
  DLL last = *head;
  while(index > 0) {
    snd_to_last = last;
    last = last->next;
    index--;
  }
  if(snd_to_last) {
    snd_to_last->next = new_node;
    new_node->prev = snd_to_last;
    new_node->next = last;
    last->prev = new_node;
  } else {
    if(*head) {
      new_node->next = *head;
      new_node->prev = *head;
      (*head)->next = new_node;
      (*head)->prev = new_node;
    } else {
      new_node->next = new_node;
      new_node->prev = new_node;
    }
    *head = new_node;
  }
}

int main(void) {

  const int len = 2;
  const int data = 1;
  DLL s = dll_circular_create(len, data);

  const int uneq = 5;
  const int mid_index = len / 2;
  dll_circular_insert(&s, uneq, mid_index);

  DLL ptr = s;
  int count = 0;
  do {
    if(data != ptr->data) {
      goto ERROR;
    }
    ptr = ptr->next;
    count++;
  } while(ptr != s && count != mid_index);

  if(uneq != ptr->data) {
    goto ERROR;
  }
  ptr = ptr->next;
  count++;
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
