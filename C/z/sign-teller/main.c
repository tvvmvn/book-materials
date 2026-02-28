#include <stdio.h>

void isPositive(int n) {
  if (n > 0) {
    printf("Positive number\n");
  } else if (n < 0) {
    printf("Negative number\n"); 
  } else {
    printf("Zero\n");
  }
}

int main() {
  isPositive(2);
  isPositive(0);
  isPositive(-5);
}