#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 10

typedef struct {
  int data[CAPACITY];
  int front;
  int size;
} Queue;

void enqueue(Queue *q, int element);
int dequeue(Queue *q);
int peek(Queue *q);
bool isEmpty(Queue *q);
int size(Queue *q);
void printQueue(Queue *q);

int main() {
  Queue queue = { .front = 0, .size = 0 };

  enqueue(&queue, 'A');
  enqueue(&queue, 'B');
  enqueue(&queue, 'C');
  
  printQueue(&queue);

  printf("Dequeue: %c\n", dequeue(&queue));
  printf("Peek: %c\n", peek(&queue));
  printf("isEmpty: %d\n", isEmpty(&queue));
  printf("Size: %d\n", size(&queue));

  return 0;
}

void enqueue(Queue *q, int element) {
  if (q->size == CAPACITY) {
    printf("Queue is full\n");
    return;
  }
  q->data[(q->front + q->size) % CAPACITY] = element;
  q->size++;
}

int dequeue(Queue *q) {
  if (isEmpty(q)) {
    printf("Queue is empty\n");
    return -1;
  }
  int item = q->data[q->front];
  q->front = (q->front + 1) % CAPACITY;
  q->size--;
  return item;
}

int peek(Queue *q) {
  if (isEmpty(q)) {
    printf("Queue is empty\n");
    return -1;
  }
  return q->data[q->front];
}

bool isEmpty(Queue *q) {
  return q->size == 0;
}

int size(Queue *q) {
  return q->size;
}

void printQueue(Queue *q) {
  printf("Queue: ");
  for (int i = 0; i < q->size; ++i) {
    printf("%c ", q->data[(q->front + i) % CAPACITY]);
  }
  printf("\n");
}


//C
// Queue: A B C 
// Dequeue: A
// Peek: B
// isEmpty: 0
// Size: 2