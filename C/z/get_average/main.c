#include <stdio.h>

int main() {
  int a, b, c;
  int sum;

  printf("enter your scores: ");
  scanf("%d %d %d", &a, &b, &c);

  sum = a + b + c;

  double avg = (double) sum / 3;

  printf("average: %.2f", avg);
}


