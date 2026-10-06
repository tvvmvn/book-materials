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

  printf("%d\n", today);
  printf("%d\n", SAT);
  printf("%d\n", today == SAT);
}

// 5
// 5
// 1