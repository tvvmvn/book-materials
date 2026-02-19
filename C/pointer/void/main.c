#include <stdio.h>

int main() {
  int n = 2;
  char c = 'A';

  // void* pointer can store all types of pointers.
  void* p1 = &n;
  void* p2 = &c;

  // dereference with casting
  printf("%d\n", *(int*)p1);
  printf("%c\n", *(char*)p2);
  // printf("%d\n", *p1); // error
}