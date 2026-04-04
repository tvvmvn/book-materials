#include <stdio.h>

// 구조체 선언
typedef struct Person {
  char name[10];
  int age;
} Person;

int main() {
  // 구조체 배열에서 각 요소(구조체)의 중괄호를 아래와 같이 생략할 수 있습니다.
  Person persons[] = {"John", 30, "Jane", 25, "Mary", 40};

  for (int i = 0; i < 3; i++) {
    printf("%s (%d)\n", persons[i].name, persons[i].age);
  }
}

// John (30)
// Jane (25)
// Mary (40)