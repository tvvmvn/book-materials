#include <stdio.h>

int main() {
  char* s = "hello";

  // 포인터로 출력
  printf("%p\n", s);
  // 문자로 출력 (포인터 연산 활용)
  printf("%c\n", *s);
  printf("%c\n", *(s + 1));
  printf("%c\n", *(s + 2));
  printf("%c\n", *(s + 3));
  printf("%c\n", *(s + 4));
  // 문자열로 출력
  printf("%s\n", s);
}


// 0x100000f92
// h
// e
// l
// l
// o
// hello