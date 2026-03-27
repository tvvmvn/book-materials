#include <stdio.h>

int main() {
  int age = 20;

  if (age < 18) {
    printf("10대 입니다");
  } else if (age >= 18 && age < 30) {
    printf("20대 입니다");
  } else if (age >= 30 && age < 40) {
    printf("30대 입니다");
  } else {
    printf("40대 이상입니다");
  }
}
// 20대 입니다