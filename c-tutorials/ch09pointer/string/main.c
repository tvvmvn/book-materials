#include <stdio.h>

int main() {
  char* s = "hello";

  printf("%p\n", s);
  printf("%s\n", s);
  printf("%c\n", *s);
  printf("%c\n", *(s + 1));
  printf("%c\n", *(s + 2));
  printf("%c\n", *(s + 3));
  printf("%c\n", *(s + 4));
}

//0x100000f96
//h
//hello