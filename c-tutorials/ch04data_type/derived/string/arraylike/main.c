#include <stdio.h>

int main() {
  // 마지막에 \0(널 문자)를 직접 추가해야 합니다.
  char greeting[] = {'h', 'e', 'l', 'l', 'o', '\0'};

  printf("%s\n", greeting);

  return 0;
}

// hello