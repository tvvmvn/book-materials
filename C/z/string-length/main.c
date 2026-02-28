#include <stdio.h>

int main() {
  char s[] = "hello world";
  
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  printf("%d\n", i);
}