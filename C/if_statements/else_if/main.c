#include <stdio.h>

int main() {
  int age = 20;

  if (age < 18) {
    printf("10s");
  } else if (age >= 18 && age < 30) {
    printf("20s");
  } else if (age >= 30 && age < 40) {
    printf("30s");
  } else {
    printf("more than 40s");
  }
}
// 20s