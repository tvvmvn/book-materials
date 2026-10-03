#include <stdio.h>

// 문자열을 입력받는 함수입니다
void display(char s[]) {
  printf("hello %s\n", s);
}

int main() {
  display("C");
  display("Java");
  display("Python");
  
  return 0;
}

// hello C
// hello Java
// hello Python