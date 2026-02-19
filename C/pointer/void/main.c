#include <stdio.h>

int main() {
  int n = 2;
  char c = 'A';

  void* p1 = &n;
  void* p2 = &c;

  printf("%d\n", *(int*)p1);
  printf("%c\n", *(char*)p2);
  // printf("%d\n", *p1); // error
}