#include <stdio.h>
#define CAPACITY 5

char queue[CAPACITY];
int front = 0;
int rear = -1;
int size = 0;

void enq(char c) {
  rear = (rear + 1) % CAPACITY;

  queue[rear] = c;
  
  size++;
}

void deq() {
  front = (front + 1) % CAPACITY;

  size--;
}

void printQueue() {
  printf("Queue: ");
  for (int i = 0; i < size; i++) {
    printf("%c ", queue[(front + i) % CAPACITY]);
  }
  printf("\n");
}

int main() {
  enq('A');
  enq('B');
  enq('C');
  enq('D');
  deq();
  enq('E');
  deq();
  enq('F');

  printQueue();
}