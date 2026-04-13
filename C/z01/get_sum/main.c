#include <stdio.h>

int main() {
  int sum = 0;

  for (int i = 1; i <= 10; i++) { 
    sum += i; // sum = sum + i와 같습니다
  }
  printf("%d", sum);
}

//55