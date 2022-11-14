// Valdemar Kudzma
// 2022-11-14

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define QUEUE_EMPTY INT_MIN

typedef struct node {
  float value;
  struct node * next;
} node;

typedef struct {
  node *head;
  node *tail;
} queue;

// inicjalizacja kolejki
void init_queue(queue *q);

// dodanie do kolejki
void enqueue(queue *q, float value);

// 
float dequeue(queue *q);

int main(){
  queue q1, q2, q3;

  init_queue(&q1);
  init_queue(&q2);
  init_queue(&q3);

  enqueue(&q1, 56.56);
  enqueue(&q2, 78.78);
  enqueue(&q2, 23.23);
  enqueue(&q2, 988.98);
  enqueue(&q3, 13.13);

  float i;
  while ((i = dequeue(&q2)) != QUEUE_EMPTY){
    printf("i = %.2f\n", i);
  }
  
  return 0;
}

void init_queue(queue *q) {
  
  q->head = NULL;
  q->tail = NULL;
}

void enqueue(queue *q, float value){
  
  node * newnode = malloc(sizeof(node));
  newnode->value = value;
  newnode->next = NULL;
  
  if (q->tail != NULL) {
    q->tail->next = newnode;
  }
  q->tail = newnode;
  
  if (q->head == NULL) {
    q->head = newnode;
  }
}

float dequeue(queue *q){
  
  if (q->head == NULL) return QUEUE_EMPTY;
  node *tmp = q->head;
  float result = tmp->value;
  q->head = q->head->next;
  
  if (q->head == NULL){
    q->tail = NULL;
  }
  
  free(tmp);
  return result;
}
