#include <stdio.h>

int main() {
  char greeting[] = "hello";

  greeting[0] = 'H';

  printf("%s\n", greeting);
  
  return 0;
}
