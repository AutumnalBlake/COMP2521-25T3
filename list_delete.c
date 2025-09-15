#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
	int value;
	struct node *next;
};

struct list {
    struct node *head;
};

typedef struct list *List;

struct node *new_node(int);
List read_list(int, char **);
void free_list(List l);
void print_list(List l);
void delete_from_list(List l, int to_delete);

int main(int argc, char **argv) {
    List l = read_list(argc, argv);
    int to_delete;
    printf("Enter a number to delete from the list: ");
    scanf("%d", &to_delete);
    delete_from_list(l, to_delete);
    print_list(l);
    free_list(l);
}

struct node *new_node(int val) {
    struct node *n = malloc(sizeof(struct node));
    n->next = NULL;
    n->value = val;
    return n;
}

void delete_from_list(List l, int to_delete) {
    // TODO
}

List read_list(int argc, char **argv) {
    List l = malloc(sizeof(struct list));
    l->head = NULL;
    if (argc == 1) return l;

    struct node *head = new_node(atoi(argv[1]));
    struct node *curr = head;
    for (int i = 2; i < argc; i++) {
        curr->next = new_node(atoi(argv[i]));
        curr = curr->next;
    }
    
    l->head = head;
    return l;
}

void free_list(List l) {
    struct node *curr = l->head;
    struct node *prev;

    while (curr != NULL) {
        prev = curr;
        curr = curr->next;
        free(prev);
    }
}

void print_list(List l) {
    for (struct node *n = l->head; n; n = n->next) {
        printf("%d ", n->value);
    }
    putchar('\n');
}