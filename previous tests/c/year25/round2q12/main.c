#include <stdio.h>
#define SIZE 3

typedef struct {
  int data[SIZE];
  int front;
  int rear;
} Queue;

void enq(Queue* q, int val) {
  q->data[q->rear] = val;
  q->rear = (q->rear + 1) % SIZE;
}

int deq(Queue* q) {
  int val = q->data[q->front];
  q->front = (q->front + 1) % SIZE;
  return val;
}

int main() {
  Queue q = {{0}, 0, 0};
  int a, b;
  enq(&q, 1);
  enq(&q, 2);
  deq(&q);
  enq(&q, 3);
  a = deq(&q);
  b = deq(&q);
  printf("%d and %d", b, a);
  
  return 0;
}
// 3 and 2