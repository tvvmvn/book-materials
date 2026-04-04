#include <stdio.h>

int main() {
  // [3]은 persons 배열에서 요소(문자열)의 최대 개수를 의미합니다
  // [10]은 각 요소(문자열)에서 문자의 최대 개수를 의미합니다
  char persons[3][10] = {"John", "Jane", "Marry"};

  for (int i = 0; i < 3; i++) {
    printf("%s\n", persons[i]);
  }
}

// John
// Jane
// Marry