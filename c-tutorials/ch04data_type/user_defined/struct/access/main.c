#include <stdio.h>

struct Person {
  char name[10];
  int age;
};

int main() {
  struct Person person = {"John", 30};

  // 이름에 접근
  printf("%s\n", person.name);
  // 나이에 접근
  printf("%d\n", person.age);
}

// John
// 30