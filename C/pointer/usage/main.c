#include <stdio.h>

int main() {
  int n;  
  int* ptr = &n;   

  *ptr = 2;

  printf("%d", n);//2

  return 0;
}