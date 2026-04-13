#include <stdio.h>

int main() {
  // greeting은 문자열 포인터입니다. 
  // 문자열 포인터를 사용해 문자열을 다룰 수도 있습니다.
  char* greeting = "hello";

  printf("%p\n", greeting);
  printf("%c\n", *greeting);
  printf("%s\n", greeting);
}

//0x100000f96
//h
//hello