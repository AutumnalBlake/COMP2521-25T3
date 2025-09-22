#include "list.h"

#include <stdlib.h>
#include <stdio.h>

int listLength(struct node *head);

int main(int argc, char *argv[]) {
    struct node *l = listFromArgs(argc, argv);
    listPrint(l);
    printf("Length: %d\n", listLength(l));
    listFree(l);
}

int listLength(struct node *head) {
    if (head == NULL) return 0;
    return 1 + listLength(head->next);
}
