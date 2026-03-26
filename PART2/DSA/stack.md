# 물리적 구조와 코드 구현

<그림 - 스택의 물리적 공간에서의 모습>

스택을 구현할 때는 일반적으로 배열처럼 연속된 메모리 공간을 활용합니다. 
그 다음 내부적으로 스택을 작동시킬 변수 top을 추가합니다. 
스택이 비어있을 때 top은 -1 이며 자료가 쌓이면 top도 1씩 증가하고 
자료가 삭제되면 top은 1씩 감소합니다. 
예를 들어 스택에 3개의 자료가 있으면 top은 2입니다.


다음은 아래 그림을 구현한 C 언어 프로그램입니다.
```
push A 
push B
push C
pop
push D
push E
```


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
    printf("Overflow\n");
    return;
  }
  s->stack[++s->top] = element;
}

int pop(Stack *s) {
  if (s->top == -1) {
    printf("Underflow\n");
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
  pop(myStack);
  push(myStack, 'D');
  push(myStack, 'E');

  // 스택 출력
  printStack(myStack);

  printf("Peek: %c\n", peek(myStack));
  printf("isEmpty: %d\n", isEmpty(myStack));
  printf("Size: %d\n", size(myStack));

  return 0;
}

// Stack: A B D E 
// Peek: E
// isEmpty: 0
// Size: 4
```
