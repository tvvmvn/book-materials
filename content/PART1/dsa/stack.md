# 스택

리스트의 한쪽 끝으로만 자료의 삽입과 삭제가 이루어지는 자료구조입니다.
후입 선출 (LIFO) 방식으로 자료를 처리합니다.
저장할 기억 공간이 없는 상태에서 데이터가 삽입되면 오버플로가 발생합니다.
삭제한 데이터가 없는 상태에서 데이터를 삭제하면 언더플로가 발생합니다.

*그림 - 스택*


```c
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *stack;
    int top;
    int capacity;
} Stack;

Stack* createStack(int capacity) {
    Stack *newStack = (Stack*)malloc(sizeof(Stack));
    newStack->stack = (int*)malloc(capacity * sizeof(int));
    newStack->top = -1;
    newStack->capacity = capacity;
    return newStack;
}

void push(Stack *s, int element) {
    if (s->top == s->capacity - 1) {
        printf("Stack is full\n");
        return;
    }
    s->stack[++s->top] = element;
}

int pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->stack[s->top--];
}

int peek(Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->stack[s->top];
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int size(Stack *s) {
    return s->top + 1;
}

void printStack(Stack *s) {
    printf("Stack: ");
    for (int i = 0; i <= s->top; ++i) {
        printf("%c ", s->stack[i]);
    }
    printf("\n");
}

int main() {
    Stack *myStack = createStack(100);

    push(myStack, 'A');
    push(myStack, 'B');
    push(myStack, 'C');

    // Print initial stack
    printStack(myStack);

    printf("Pop: %c\n", pop(myStack));
    printf("Peek: %c\n", peek(myStack));
    printf("isEmpty: %d\n", isEmpty(myStack));
    printf("Size: %d\n", size(myStack));

    return 0;
}

// Stack: A B C
// Pop: C
// Peek: B
// isEmpty: 0
// Size: 2
```
