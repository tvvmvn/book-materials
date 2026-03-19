#include <stdio.h>

int main() {
  int ages[] = {12, 20, 28, 35};
  int size = 4;

  printf("Adults: ");
  for (int i = 0; i < size; i++) {
    if (ages[i] >= 18) {
      printf("%d ", ages[i]);
    }
  }
  //Adults: 20 28 35 

  return 0;
}

