#include <stdio.h>

int main() {
  char* greeting = "hello";

  printf("%p\n", greeting); //0x100000f96
  printf("%c\n", *greeting); //h
  printf("%s\n", greeting); //hello
}