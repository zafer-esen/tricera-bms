# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "<stdin>"
# 1 "./stdlib.h" 1
# 10 "./stdlib.h"
void __foo(void *arg){


}

void abort(void){
  return 1;
}
# 2 "<stdin>" 2
extern unsigned __VERIFIER_nondet_uint();
extern int __VERIFIER_nondet_int();
extern char *__VERIFIER_nondet_charp();







typedef struct packet {
    unsigned size;
    unsigned prio;
    char *payload;
} Packet;

typedef struct packet_list_node {
    struct packet packet;
    struct packet_list_node *next;
} Node;

struct packet_queue {
    struct packet_list_node *front;
};


Packet receive() {
    Packet packet;
    packet.size = __VERIFIER_nondet_uint();
    packet.prio = __VERIFIER_nondet_int() ? 0 : 1;
    packet.payload = __VERIFIER_nondet_charp();
    return packet;
}

void send(struct packet p) { (void)p; }

void append_to_queue(Packet p, Node** q) {
    Node* node = calloc(sizeof(Node));
    node->packet = p;
    node->next = *q;
    *q = node;
}

void process_prio_queue(Node* q) {
  Node* node;
    for (node = q; node != 0; node = node->next) {
        if (!(node->packet.prio == 1 || node->packet.size < 500))
            assert(0);
        send(node->packet);
    }
}

void process_normal_queue(Node* q) {
  Node* node;
    for (node = q; node != 0; node = node->next) {
        if (!(node->packet.prio == 0 && node->packet.size >= 500))
            assert(0);
        send(node->packet);
    }
}

int main() {
    Node* prio_queue = 0;
    Node* normal_queue = 0;

    while (__VERIFIER_nondet_int()) {
        Packet new_packet = receive();
        if (new_packet.size > 0) {
            if (new_packet.prio == 1) {
                append_to_queue(new_packet, &prio_queue);
            } else if (new_packet.size < 500) {
                append_to_queue(new_packet, &prio_queue);
            } else {
                append_to_queue(new_packet, &normal_queue);
            }
        }
    }

    process_prio_queue(prio_queue);
    process_normal_queue(normal_queue);

    return 0;
}
