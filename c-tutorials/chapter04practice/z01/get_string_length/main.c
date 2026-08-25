#include <stdio.h>

int main() {
  char s[] = "hello";
  
  int length = 0;
  // \0(Null 문자)을 만날 때까지 length 변수를 1씩 증가시킵니다
  while (s[length] != '\0') {
    length++;
  }
  printf("%d\n", length);
}

//5
