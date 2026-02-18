#include <stdio.h>

int main() {

  printf("%d\n", 1 > 0 && 1 < 2); // 1
  printf("%d\n", 1 > 0 || 1 > 2); // 1
  printf("%d\n", !(1 > 0)); // 0
}