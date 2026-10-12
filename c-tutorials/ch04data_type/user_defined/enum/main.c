#include <stdio.h>

enum Day {
  MON,
  TUE,
  WED,
  THU,
  FRI,
  SAT,
  SUN,
};

int main() {
  enum Day today = SAT;

  // 오늘이 토요일이니?
  printf("%d\n", today == SAT);
}

// 5
// 5
// 1