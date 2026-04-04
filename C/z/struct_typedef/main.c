#include <stdio.h>

typedef struct {
  char name[10];
  int age;
} Person;

int main() {
  // typedef을 활용해서 변수 선언이 더 간단해졌습니다.
  Person person = {"John", 30};

  printf("%s\n", person.name);
  printf("%d\n", person.age);
}


// John
// 30