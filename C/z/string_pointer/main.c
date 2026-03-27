#include <stdio.h>

int main() {
  char* greeting = "hello";

  printf("%p\n", greeting);
  printf("%c\n", *greeting);
  printf("%s\n", greeting);
}

//0x100000f96
//h
//hello