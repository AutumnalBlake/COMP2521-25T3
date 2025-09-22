#include "list.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool listIsSorted(struct node *head);

int main(int argc, char *argv[]) {
    struct node *l = listFromArgs(argc, argv);
    listPrint(l);
    puts(listIsSorted(l) ? "Sorted\n" : "Not sorted\n");
    listFree(l);
}

bool listIsSorted(struct node *head) {
    return false;
}
