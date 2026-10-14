#include <stdio.h>
#include <stdlib.h>

// 스택 구조체
typedef struct {
  int *data; // 요소들을 저장하는 공간
  int top; // 스택의 꼭대기(peak)를 가리키는 데이터
  int capacity; // 스택의 수용량(capacity)
} Stack;

// 스택을 생성하는 함수
Stack* createStack(int capacity) {
  // 스택 포인터를 생성합니다
  Stack *newStack = malloc(sizeof(Stack));
  // 입력받은 수용량 만큼 공간을 확보합니다.
  newStack->data = malloc(capacity * sizeof(int));
  // top, 수용량 초기화
  newStack->top = -1;
  newStack->capacity = capacity;
  // 스택 포인터 반환
  return newStack;
}

// 스택에 요소를 추가하는 함수
void push(Stack *s, int element) {
  // 스택이 꽉 찬 경우 추가할 수 없음
  if (s->top == s->capacity - 1) {
    printf("Stack is full\n");
    return;
  }
  // 제일 위에 새 요소를 추가합니다.
  s->data[++s->top] = element;
}

// 스택에서 요소를 꺼내는 함수
int pop(Stack *s) {
  // 스택이 비어서 요소를 꺼낼 수 없음
  if (s->top == -1) {
    printf("Stack is empty\n");
    return -1;
  }
  // 꼭대기에 있는 요소를 추출합니다
  return s->data[s->top--];
}

// 스택에서 꼭대기에 있는 요소를 반환하는 함수
int peak(Stack *s) {
  // 스택이 빈 경우 
  if (s->top == -1) {
    printf("Stack is empty\n");
    return -1;
  }
  // 반환
  return s->data[s->top];
}

// 스택이 비어있는지 검사하는 함수
int isEmpty(Stack *s) {
  return s->top == -1;
}

// 스택의 사이즈를 반환하는 함수
int size(Stack *s) {
  return s->top + 1;
}

// 스택을 출력하는 함수
void printStack(Stack *s) {
  printf("Stack: ");
  for (int i = 0; i <= s->top; ++i) {
    printf("%c ", s->data[i]);
  }
  printf("\n");
}

int main() {
  // 스택 생성 및 초기화
  Stack *stack = createStack(100);

  // 스택에 요소 A, B, C를 순서대로 삽입합니다
  push(stack, 'A');
  push(stack, 'B');
  push(stack, 'C');

  // 현재 스택의 상태
  printStack(stack);

  // 요소 추출
  printf("Pop: %c\n", pop(stack));

  // 현재 꼭대기에 있는 요소
  printf("Peek: %c\n", peak(stack));

  // 스택이 비어있습니까?
  printf("isEmpty: %d\n", isEmpty(stack));

  // 스택의 사이즈
  printf("Size: %d\n", size(stack));

  return 0;
}


// 출력 결과
// Stack: A B C 
// Pop: C
// Peek: B
// isEmpty: 0
// Size: 2