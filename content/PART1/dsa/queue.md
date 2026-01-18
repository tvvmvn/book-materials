# 큐

리스트의 뒤에서 삽입 작업이 이루어지고 앞쪽에서 삭제 작업이 이루어지는 자료구조입니다. 선입선출(FIFO) 방식으로 작동합니다. 시작을 표시하는 프런트 포인터와 끝을 표시하는 리어 포인터가 있습니다.

*그림 - 큐*


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