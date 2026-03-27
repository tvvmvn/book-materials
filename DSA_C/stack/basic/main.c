#include <stdio.h>
#include <stdlib.h>

// 스택 구조체
typedef struct {
  int *data; // 데이터를 저장하는 공간
  int top; // 스택의 최상단을 가리키는 변수
  int capacity; // 스택의 최대 수용량
} Stack;

// 스택을 생성하는 함수
Stack* createStack(int capacity) {
  // 스택 구조체 포인터를 생성합니다
  Stack *newStack = (Stack*)malloc(sizeof(Stack));
  // 데이터 공간을 확보합니다.
  newStack->data = (int*)malloc(capacity * sizeof(int));
  // top 초기화
  newStack->top = -1;
  // 수용량 초기화
  newStack->capacity = capacity;
  // 생성한 스택 구조체 포인터를 반환합니다.
  return newStack;
}

// 스택에 자료를 추가하는 함수
void push(Stack *s, int element) {
  if (s->top == s->capacity - 1) {
    printf("Stack is full\n");
    return;
  }
  s->data[++s->top] = element;
}

// 스택에서 자료를 꺼내는 함수
int pop(Stack *s) {
  if (s->top == -1) {
    printf("Stack is empty\n");
    return -1;
  }
  return s->data[s->top--];
}

// 스택에서 제일 위에 있는 자료를 반환하는 함수
int peek(Stack *s) {
  if (s->top == -1) {
    printf("Stack is empty\n");
    return -1;
  }
  return s->data[s->top];
}

// 현재 스택이 비었는지 확인하는 함수
int isEmpty(Stack *s) {
  return s->top == -1;
}

// 스택의 사이즈를 반환하는 함수
int size(Stack *s) {
  return s->top + 1;
}

// 스택의 데이터를 출력하는 함수
void printStack(Stack *s) {
  printf("Stack: ");
  for (int i = 0; i <= s->top; ++i) {
    printf("%c ", s->data[i]);
  }
  printf("\n");
}

int main() {
  // 최대 수용량이 100인 스택을 생성합니다.
  Stack *stack = createStack(100);

  // 스택에 A, B, C를 순서대로 집어넣습니다.
  push(stack, 'A');
  push(stack, 'B');
  push(stack, 'C');

  // 현재 스택의 상태를 출력합니다.
  printStack(stack);

  // 제일 위에있는 C를 제거합니다.
  printf("Pop: %c\n", pop(stack));

  // 현재 스택에서 제일 위에 있는 데이터를 출력합니다.
  printf("Peek: %c\n", peek(stack));

  // 스택이 비어있는지 확인합니다.
  printf("isEmpty: %d\n", isEmpty(stack));

  // 현재 스택의 사이즈를 출력합니다.
  printf("Size: %d\n", size(stack));

  return 0;
}


// 출력 결과
// Stack: A B C 
// Pop: C
// Peek: B
// isEmpty: 0
// Size: 2