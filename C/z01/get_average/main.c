#include <stdio.h>

int main() {
  int a, b, c;
  int sum;

  // 3 과목의 점수를 입력받습니다
  printf("enter your 3 scores: ");
  scanf("%d %d %d", &a, &b, &c);

  // 일단 모두 더합니다
  sum = a + b + c;

  // 3 으로 나눕니다. 소수점을 보존하기 위해 실수형으로 저장합니다
  double avg = (double) sum / 3;

  printf("average: %.2f", avg);
}

// enter your 3 scores: 90 90 95
// average: 91.67