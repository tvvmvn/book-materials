#include <stdio.h>

// 함수를 먼저 선언하고
void greet(char to[]);

int main() {
  greet("C");
}

// 나중에 정의합니다
void greet(char to[]) {
  printf("hello %s\n", to);
}

// hello C
