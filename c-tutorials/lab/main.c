#include <stdio.h>
#include <stdlib.h>

int main() {

  char s[] = "hello";

  unsigned long length = sizeof(s) - 1 / sizeof(char);

  printf("%lu", length);
}
