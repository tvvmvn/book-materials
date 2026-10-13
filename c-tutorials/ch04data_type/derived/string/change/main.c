#include <stdio.h>

int main() {
  char greeting[] = "hello";

  // h -> H로 바꾸기
  greeting[0] = 'H';

  printf("%s\n", greeting);
  
  return 0;
}

// Hello