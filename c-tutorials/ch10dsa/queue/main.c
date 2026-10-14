#include <stdio.h>
#include <stdbool.h>

// 매크로: 큐의 수용량(capacity)
#define CAPACITY 10

// 큐 구조체
typedef struct {
  // 요소 저장소
  int data[CAPACITY];
  // 첫번째 요소의 위치를 가리키는 데이터
  int front;
  // 사이즈 (요소 개수)
  int size;
} Queue;

// 큐에 요소를 추가하는 함수
void enqueue(Queue *q, int element);
// 큐에서 요소를 추출하는 함수
int dequeue(Queue *q);
// 큐의 첫번째 요소를 반환하는 함수
int peek(Queue *q);
// 큐가 현재 비어있는지 확인하는 함수
bool isEmpty(Queue *q);
// 큐의 사이즈를 반환하는 함수
int size(Queue *q);
// 큐를 출력하는 함수
void printQueue(Queue *q);

int main() {
  // 큐 생성 및 초기화
  Queue queue = {{0}, 0, 0};

  // 요소 A, B, C를 차례대로 추가합니다
  enqueue(&queue, 'A');
  enqueue(&queue, 'B');
  enqueue(&queue, 'C');
  
  // 현재 상태
  printQueue(&queue);

  // 첫번째 요소(A)가 추출됩니다
  printf("Dequeue: %c\n", dequeue(&queue));
  // A가 추출되었으므로 B가 첫번째입니다
  printf("Peek: %c\n", peek(&queue));
  // 두 요소가 있으니 거짓입니다
  printf("isEmpty: %d\n", isEmpty(&queue));
  // B, C 총 2개입니다.
  printf("Size: %d\n", size(&queue));

  return 0;
}

void enqueue(Queue *q, int element) {
  // 큐가 꽉 차서 더이상 추가할 수 없는 경우
  if (q->size == CAPACITY) {
    printf("Queue is full\n");
    return;
  }
  // 새 요소(element)를 추가합니다.
  // 원형 큐(Circular Queue): 수용량(capacity)으로 나눈 나머지를 인덱스로 사용(큐 구현의 핵심)
  q->data[(q->front + q->size) % CAPACITY] = element;
  // 사이즈 업데이트
  q->size++;
}

int dequeue(Queue *q) {
  // 큐가 비어서 추출할 수 없는 경우
  if (isEmpty(q)) {
    printf("Queue is empty\n");
    return -1;
  }
  // 추출할 요소
  int item = q->data[q->front];
  // front, size 업데이트
  q->front = (q->front + 1) % CAPACITY;
  q->size--;
  // 추출한 요소 반환
  return item;
}

int peek(Queue *q) {
  // 큐가 빈 경우 -1 반환
  if (isEmpty(q)) {
    printf("Queue is empty\n");
    return -1;
  }
  // 첫번째 요소 반환
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