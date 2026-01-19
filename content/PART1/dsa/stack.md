# 스택 (Stack)

입구에서 자료의 삽입과 삭제가 이루어지는 자료 구조입니다. LIFO(Last In First Out) 방식으로 자료를 처리합니다. 박스에 차곡차곡 물건을 쌓는 과정을 생각해보세요. 

*그림 - 스택*

스택은 어디에 사용될까요? 뒤로 가기 등..


# 물리적 구조와 코드 구현

일반적으로 배열을 통해 스택의 기본 구조를 만들고 탑을 이동시키는 방식으로 작동합니다.

- push : 스택에 자료를 추가하는 연산입니다. 저장할 공간이 더 이상 없는 상태에서 데이터 삽입을 시도하면 Overflow가 발생합니다.

- pop : 스택에서 자료를 삭제하는 연산입니다. 데이터가 없는 상태에서 삭제를 시도하면 Underflow가 발생합니다.


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
