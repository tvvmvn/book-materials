# 큐 (Queue)

뒤에서 자료 삽입을 수행하고 앞에서 자료 삭제를 수행하는 자료 구조입니다. FIFO(First In First Out) 방식, 즉 처음에 추가된 자료가 먼저 제거되는 방식입니다. 큐는 줄서있는 사람들에 비유할 수 있습니다. 앞에 있는 사람부터 요청이 처리되고 줄에서 나갑니다. 그리고 새로운 사람들은 줄의 맨 뒤에 서야 합니다.

큐에 자료를 추가하는 연산을 enqueue라고 하며 공간이 부족한 상태에서 자료 추가를 시도하면 오류가 발생합니다. 큐에서 자료를 삭제하는 연산을 dequeue라고 하며 큐가 빈 상태에서 삭제를 시도하면 오류가 발생합니다.

*그림 - 큐*

큐는 실제로 어떤 작업에 사용될까요? 프린터 출력 대기열, 프로세스 준비 큐, 등 FIFO 방식이 필요한 모든 곳에서 볼 수 있습니다.


# 물리적 구조와 코드 구현

기본적으로 배열처럼 연속된 메모리 공간을 통해 기본 구조를 만듭니다. 그 다음 내부적으로 큐를 작동시킬 변수 front를 추가합니다. front의 기본값은 0이며 dequeue 연산을 수행하면 front가 1씩 증가합니다.

*그림 - 메모리 상에서의 큐*

다음은 아래 그림을 코드로 구현한 C 프로그램입니다.

enqueue A
enqueue B
enqueue C
dequeue
enqueue D

```c
#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 10

struct Queue {
  int queue[CAPACITY];
  int front;
  int size;
};

bool isEmpty(struct Queue *q) {
  return q->size == 0;
}

int first(struct Queue *q) {
  if (isEmpty(q)) {
    printf("Queue is empty\n");
    return -1;
  }
  return q->queue[q->front];
}

int size(struct Queue *q) {
  return q->size;
}

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

void printQueue(struct Queue *q) {
  printf("Queue: ");
  for (int i = 0; i < q->size; ++i) {
    printf("%c ", q->queue[(q->front + i) % CAPACITY]);
  }
  printf("\n");
}

int main() {
  struct Queue myQueue = { .front = 0, .size = 0 };

  // 큐에 자료를 추가합니다
  enqueue(&myQueue, 'A');
  enqueue(&myQueue, 'B');
  enqueue(&myQueue, 'C');
  dequeue(&myQueue);
  enqueue(&myQueue, 'D');

  // 큐의 현재 상태를 출력합니다
  printQueue(&myQueue);

  printf("First: %c\n", first(&myQueue));
  printf("isEmpty: %d\n", isEmpty(&myQueue));
  printf("Size: %d\n", size(&myQueue));

  return 0;
}
// Queue: B C D 
// First: B
// isEmpty: 0
// Size: 3
```