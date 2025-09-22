struct node {
    int value;
    struct node *next;
};

struct list {
    struct node *head;
};

struct node *listFromArgs(int argc, char *argv[]);

struct node *listFromArray(int size, int *arr);

struct list *wrapped(struct node *head);

void listPrint(struct node *l);

void listFree(struct node *l);

void listFreeWrapped(struct list *l);