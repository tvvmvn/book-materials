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
  enum Day today = FRI;

  switch (today) {
    case MON:
      printf("Monday\n");
      break;
    case TUE:
      printf("Tuesday\n");
      break;
    case WED:
      printf("Wednesday\n");
      break;
    case THU:
      printf("Thursday\n");
      break;
    case FRI:
      printf("Friday\n");
      break;
    case SAT:
      printf("Saturday\n");
      break;
    case SUN:
      printf("Sunday\n");
      break;
  }
}

// Friday
