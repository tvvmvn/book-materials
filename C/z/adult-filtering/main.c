#include <stdio.h>

int main() {
  int ages[] = {12, 20, 28, 35};
  int length = sizeof(ages) / sizeof(ages[0]);

  printf("Adults: ");
  for (int i = 0; i < length; i++) {
    if (ages[i] >= 18) {
      printf("%d ", ages[i]);
    }
  }
  //Adults: 20 28 35 
  return 0;
}

