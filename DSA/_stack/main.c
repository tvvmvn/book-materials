#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *data;
  int top;
  int capacity;
} Stack;

void push(Stack *stack, int element) {
  if (stack->top == stack->capacity - 1) {
    printf("Overflow\n");
    return;
  }
  stack->data[++(stack->top)] = element;
}

int pop(Stack *stack) {
  if (stack->top == -1) {
    printf("Underflow\n");
    return -1;
  }
  return stack->data[stack->top--];
}

int peek(Stack *stack) {
  if (stack->top == -1) {
    printf("Stack is empty\n");
    return -1;
  }
  return stack->data[stack->top];
}

int isEmpty(Stack *stack) {
  return stack->top == -1;
}

int size(Stack *stack) {
  return stack->top + 1;
}

void printStack(Stack *stack) {
  printf("Stack: ");
  for (int i = 0; i <= stack->top; ++i) {
    printf("%c ", stack->data[i]);
  }
  printf("\n");
}

int main() {
  // 스택 생성
  int capacity = 10;
  Stack *stack = (Stack*)malloc(sizeof(Stack));
  stack->data = (int*)malloc(capacity * sizeof(int));
  stack->top = -1;
  stack->capacity = capacity;

  // 스택 연산
  push(stack, 'A');
  push(stack, 'B');
  push(stack, 'C');
  push(stack, 'D');
  pop(stack);
  push(stack, 'E');

  // 스택 출력
  printStack(stack);

  // 
  printf("Peek: %c\n", peek(stack));
  printf("isEmpty: %d\n", isEmpty(stack));
  printf("Size: %d\n", size(stack));

  return 0;
}

// Stack: A B C E 
// Peek: E
// isEmpty: 0
// Size: 4