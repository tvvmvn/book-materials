#include <stdio.h>
#define CAPACITY 10

char stack[CAPACITY];
int top = -1;

void push(char element) {
  if (top == CAPACITY - 1) {
    printf("Overflow\n");
    return;
  }
  stack[++top] = element;
}

void pop() {
  if (top < 0) {
    printf("Underflow\n");
    return;
  }
  top--;
}

void peek() {
  if (top < 0) {
    printf("Stack is empty\n");
    return;
  }
  printf("Peek: %c\n", stack[top]);
}

void size() {
  printf("Size: %d", top + 1);
}

void printStack() {
  printf("Stack: ");
  for (int i = 0; i <= top; i++) {
    printf("%c ", stack[i]);
  }
  printf("\n");
}

int main() {
  push('A');
  push('B');
  push('C');
  push('D');
  pop();
  push('E');

  printStack();
  peek();
  size();
}