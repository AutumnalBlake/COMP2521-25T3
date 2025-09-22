#include "list.h"

#include <stdlib.h>
#include <stdio.h>

struct list *listFilterPos(struct list *l);
struct node *doListFilterPos(struct node *n);

int main(int argc, char *argv[]) {
    struct list *l = wrapped(listFromArgs(argc, argv));
    struct list *filtered = listFilterPos(l);
    listPrint(l->head);
    listPrint(filtered->head);
    listFreeWrapped(l);
    listFreeWrapped(filtered);
}

struct list *listFilterPos(struct list *l) {
    struct list *filtered = malloc(sizeof(struct list));
    filtered->head = doListFilterPos(l->head);
    return filtered;
}

struct node *doListFilterPos(struct node *n) {
    if (n == NULL) return NULL;
    if (n->value < 0) {
        return doListFilterPos(n->next);
    }
    struct node *copy = malloc(sizeof(struct node));
    copy->value = n->value;
    copy->next = doListFilterPos(n->next);
    return copy;
}
