#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <stdlib.h>
#include <stdio.h>

struct Node {
  float value;
  struct Node *next;
};

// Szukanie elementu.
int find(struct Node *head, float x);

// Dodawanie elementa.
void insert(struct Node **head, float value);

// Wyprowadzić listę elementów
void printList(struct Node *head);

// Kasowanie elementa za wskazanym pointerem
void deleteNode(struct Node **head, struct Node *pointer);

// Zwraca element listy za wskazanym pointerem
float retrieve(struct Node *head, struct Node *pointer);

// Znachodzenie pointera o wskazanej wartości
struct Node *locate(struct Node *head, float value);

// Następny element listy po wskazanym pointerze
int next(struct Node *head, struct Node *pointer);

// Znajdź maksymalny element listy
float findMax(struct Node *p);

// Znajdż minimalny element listy
float findMin(struct Node *p);

// Wyczyść lista
void makeNull(struct Node **head);

// Ile elementów w liście
int size(struct Node *head);

// Sprawdź czy pusta lista
int isEmpty(struct Node *head);

void makeNull(struct Node **head) {
  struct Node *current = *head;
  struct Node *next;

  while (current != NULL) {
    next = current->next;
    free(current);
    current = next;
  }

  *head = NULL;
}

void insert(struct Node **head, float value) {
  struct Node *newnode;
  newnode = (struct Node *)malloc(sizeof(struct Node));

  newnode->value = value;
  newnode->next = NULL;

  if (*head == NULL) {
    *head = newnode;
  } else {
    struct Node *temp = *head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newnode;
  }
}

void deleteNode(struct Node **head, struct Node *pointer) {
 struct Node *temp = *head;

if (temp == pointer) {
 *head = temp->next;
 free(temp);
 return;
 }

while (temp != NULL && temp->next != pointer) {
 temp = temp->next;
 }

if (temp == NULL) {
 printf("\nPointer not found in the list.\n");
 return;
 }

if (pointer == NULL) {
 printf("\nNode not found in the list.\n");
 return;
 }

struct Node *del = temp->next;
 temp->next = del->next;
 printf("\nDeleted element : %f\n", del->value);
 free(del);
}

void printList(struct Node *head) {
  struct Node *temp;

  temp = head;
  while (temp != NULL) {
    printf(" |%f| ", temp->value);
    temp = temp->next;
  }
  printf("\n");
  return;
}

int find(struct Node *head, float x) {
  if (head == NULL)
    return 0;
  struct Node *current = head;
  while (current != NULL) {
    if (current->value == x)
      return 1;
    current = current->next;
  }
  return 0;
}

float retrieve(struct Node *head, struct Node *pointer) {
  struct Node *current = head;
  int i = 0;
  while (current != NULL) {
    if (current == pointer)
      return current->value;
    current = current->next;
    i++;
  }
  return -1;
}

struct Node *locate(struct Node *head, float value) {
  struct Node *current = head;
  while (current != NULL) {
    if (current->value == value)
      return current;
    current = current->next;
  }
  return NULL;
}

float findMax(struct Node *p) {
  if (p == NULL)
    return -32768;
  float max = -32768;

  while (p) {
    if (p->value > max)
      max = p->value;
    p = p->next;
  }
  return max;
}

float findMin(struct Node *p) {
  if (p == NULL)
    return 32768;
  float min = 32768;

  while (p) {
    if (p->value < min)
      min = p->value;
    p = p->next;
  }
  return min;
}

int size(struct Node *head) {
  if (head == NULL)
    return 0;
  int i = 0;
  struct Node *current = head;
  while (current != NULL) {
    i++;
    current = current->next;
  }
  return i;
}

int next(struct Node *head, struct Node *pointer) {
  struct Node *current = head;
  while (current != NULL && current->next != pointer) {
    current = current->next;
  }

  if (current == NULL) {
    printf("\nPointer not found in the list or it is the last element in the "
           "list.\n");
    return -1;
  }

  return current->next->value;
}

int isEmpty(struct Node *head) {
  if (head == NULL)
    return 1;
  return 0;
}

#endif
