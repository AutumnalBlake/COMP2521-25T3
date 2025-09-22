#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

struct node *new_node(int);
struct node *read_list(int, char **);
void list_free(struct node *);
int list_sum(struct node *);

int main(int argc, char **argv) {
    struct node *l = read_list(argc, argv);
    printf("The sum is %d\n", list_sum(l));
}

int list_sum(struct node *head) {
    int sum = 0;
    for (struct node *curr = head; curr != NULL; curr = curr->next) {
        sum += curr->value;
    }
    return sum;
}

struct node *new_node(int val) {
    struct node *n = malloc(sizeof(struct node));
    n->next = NULL;
    n->value = val;
    return n;
}

struct node *read_list(int argc, char **argv) {
    if (argc == 1) return NULL;
    struct node *head = new_node(atoi(argv[1]));
    struct node *curr = head;
    for (int i = 2; i < argc; i++) {
        curr->next = new_node(atoi(argv[i]));
        curr = curr->next;
    }
    return head;
}

void list_free(struct node *head) {
    if (head == NULL) return;
    list_free(head->next);
    free(head);
}