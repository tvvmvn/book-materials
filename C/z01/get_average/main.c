#include <stdio.h>

int main() {
  int a, b, c;
  int sum;

  // 세 과목의 점수를 띄어쓰기를 기준으로 입력받습니다
  printf("scores: ");
  scanf("%d %d %d", &a, &b, &c);

  // 점수 합계를 구합니다
  sum = a + b + c;

  // 정수형끼리 나눗셈을 하면 소수점이 버려지므로
  // sum을 10.0으로 형변환하고 3으로 나눕니다.
  double avg = (double) sum / 3;

  printf("average: %.2f", avg);
}

// scores: 90 90 95
// average: 91.67