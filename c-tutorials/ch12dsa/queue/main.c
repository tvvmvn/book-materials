#include <stdio.h>
#include <stdbool.h>

// 수용가능한 요소의 개수
#define CAPACITY 10

// 큐 구조체
typedef struct {
  // 데이터를 담는 공간
  int data[CAPACITY];
  // 큐에서 첫번째 요소의 위치를 가리키는 값
  int front;
  // 현재 요소의 개수
  int size;
} Queue;

// 큐에 요소를 추가하는 함수
void enqueue(Queue *q, int element);
// 큐에서 요소를 추출하는 함수
int dequeue(Queue *q);
// 큐의 첫번째 요소를 반환하는 함수
int peek(Queue *q);
// 큐가 현재 비어있는지 확인합니다
bool isEmpty(Queue *q);
// 큐의 사이즈(요소의 개수)를 반환합니다
int size(Queue *q);
// 큐를 출력하는 함수
void printQueue(Queue *q);

int main() {
  // 큐 생성과 동시에 front, size를 0으로 초기화합니다
  Queue queue = { .front = 0, .size = 0 };

  // A, B, C 요소를 차례로 추가합니다
  enqueue(&queue, 'A');
  enqueue(&queue, 'B');
  enqueue(&queue, 'C');
  
  // 현재 상태를 출력합니다
  printQueue(&queue);

  // 가장 앞의 요소(A)가 추출됩니다
  printf("Dequeue: %c\n", dequeue(&queue));
  // A가 추출되었으므로 B가 가장 앞에 있습니다
  printf("Peek: %c\n", peek(&queue));
  // 두 요소가 있으니 거짓입니다
  printf("isEmpty: %d\n", isEmpty(&queue));
  // B, C 총 2개입니다.
  printf("Size: %d\n", size(&queue));

  return 0;
}

void enqueue(Queue *q, int element) {
  // 큐가 꽉 찬 경우입니다. 추가할 수 없습니다
  if (q->size == CAPACITY) {
    printf("Queue is full\n");
    return;
  }
  // CAPACITY로 나눈 나머지를 인덱스로 사용합니다.
  // 이 기법을 원형 큐(Circular Queue)라고 하며 큐 구현의 핵심입니다.
  q->data[(q->front + q->size) % CAPACITY] = element;
  q->size++;
}

int dequeue(Queue *q) {
  // 큐가 빈 경우 입니다. 추출할 수 없습니다.
  if (isEmpty(q)) {
    printf("Queue is empty\n");
    return -1;
  }
  int item = q->data[q->front];
  // 마찬가지로 요소 추출에 원형 큐 기법이 사용되고 있습니다
  q->front = (q->front + 1) % CAPACITY;
  q->size--;
  return item;
}

int peek(Queue *q) {
  // 큐가 빈 경우
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