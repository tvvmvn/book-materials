#include <stdio.h>

int main() {
  int age = 20;

  // 10대
  if (age < 18) {
    printf("10s");
  // 20대
  } else if (age >= 18 && age < 30) {
    printf("20s");
  // 30대
  } else if (age >= 30 && age < 40) {
    printf("30s");
  // 40대 이상
  } else {
    printf("more than 40s");
  }
}
// 20s