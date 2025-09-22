#include "list.h"

#include <stdlib.h>
#include <stdio.h>

struct list *listFilterPos(struct list *l);

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
    filtered->head = NULL;
    return filtered;
}
