#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct node *listFromArgs(int argc, char *argv[]) {
  if (argc <= 1)
    return NULL;

  struct node *head = (struct node *)malloc(sizeof(struct node));
  struct node *curr = head;
  curr->value = atoi(argv[1]);

  for (int i = 2; i < argc; i++) {
    curr->next = (struct node *)malloc(sizeof(struct node));
    curr->next->value = atoi(argv[i]);
    curr = curr->next;
  }

  curr->next = NULL;
  return head;
}

struct node *listFromArray(int size, int *arr) {
  struct node *head = (struct node *)malloc(sizeof(struct node));
  struct node *curr = head;
  curr->value = arr[1];

  for (int i = 2; i < size; i++) {
    curr->next = (struct node *)malloc(sizeof(struct node));
    curr->next->value = arr[i];
    curr = curr->next;
  }

  curr->next = NULL;
  return head;
}

struct list *wrapped(struct node *head) {
  struct list *l = malloc(sizeof(struct list));
  l->head = head;
  return l;
}

void listPrint(struct node *l) {
  if (l == NULL) {
    printf("[]\n");
    return;
  }

  printf("[%d", l->value);

  for (struct node *curr = l->next; curr != NULL; curr = curr->next) {
    printf(", %d", curr->value);
  }

  printf("]\n");
}

void listFree(struct node *l) {
  struct node *prev = NULL;
  for (struct node *curr = l; curr != NULL; curr = curr->next) {
    free(prev);
    prev = curr;
  }
  free(prev);
}

void listFreeWrapped(struct list *l) {
  listFree(l->head);
  free(l);
}