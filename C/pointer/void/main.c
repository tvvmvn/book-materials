#include <stdio.h>

int main() {
  int n = 2;
  
  // all types
  void* p = &n;

  int* ptr = (int*)p;
  
  printf("%d", *ptr);
}