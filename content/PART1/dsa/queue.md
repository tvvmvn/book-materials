# 큐 (Queue)

뒤에서 자료 삽입을 수행하고 앞에서 자료 삭제를 수행하는 자료 구조입니다. FIFO(First In First Out) 방식으로 작동합니다. 사람들의 줄에 비유할 수 있습니다. 앞에 있는 사람부터 처리되고 줄에서 나갑니다. 새로운 사람들은 줄의 맨 뒤에 서야 합니다.

*그림 - 큐*

큐는 실제로 어떤 작업에 사용될까요? 티켓 구매.. 


# 물리적 구조와 코드 구현

기본적으로 배열을 통해 기본 구조를 만들고 front 포인터를 통해 완성합니다.

- enqueue: 자료 추가
- dequeue: 자료 삭제

*그림 - 메모리 상에서의 큐*


```c
#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 10

struct Queue {
  int queue[CAPACITY];
  int front;
  int size;
};

void enqueue(struct Queue *q, int element) {
  if (q->size == CAPACITY) {
    printf("Queue is full\n");
    return;
  }
  q->queue[(q->front + q->size) % CAPACITY] = element;
  q->size++;
}

int dequeue(struct Queue *q) {
  if (isEmpty(q)) {
    printf("Queue is empty\n");
    return -1;
  }
  int item = q->queue[q->front];
  q->front = (q->front + 1) % CAPACITY;
  q->size--;
  return item;
}

int peek(struct Queue *q) {
  if (isEmpty(q)) {
    printf("Queue is empty\n");
    return -1;
  }
  return q->queue[q->front];
}

bool isEmpty(struct Queue *q) {
  return q->size == 0;
}

int size(struct Queue *q) {
  return q->size;
}

void printQueue(struct Queue *q) {
  printf("Queue: ");
  for (int i = 0; i < q->size; ++i) {
    printf("%c ", q->queue[(q->front + i) % CAPACITY]);
  }
  printf("\n");
}

int main() {
  struct Queue myQueue = { .front = 0, .size = 0 };

  enqueue(&myQueue, 'A');
  enqueue(&myQueue, 'B');
  enqueue(&myQueue, 'C');
  
  printQueue(&myQueue);

  printf("Dequeue: %c\n", dequeue(&myQueue));
  printf("Peek: %c\n", peek(&myQueue));
  printf("isEmpty: %d\n", isEmpty(&myQueue));
  printf("Size: %d\n", size(&myQueue));

  return 0;
}

// Queue: A B C
// Dequeue: A
// Peek: B
// isEmpty: 0
// Size: 2
```