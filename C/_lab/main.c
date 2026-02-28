#include <stdio.h>

int main() {
  char greeting[] = "hello";

  printf("%p\n", greeting); //0x7ff7bfeff19a
  printf("%s\n", greeting); //hello
}