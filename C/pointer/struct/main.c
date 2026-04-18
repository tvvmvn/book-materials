#include <stdio.h>
#include <string.h>

// 구조체 선언
struct Person{
  char name[10];
  int age;
};

int main() {
  // 구조체 포인터
  struct Person* p;

  // 멤버에 값을 할당합니다.
  strcpy(p->name, "John");
  p->age = 30;

  printf("name: %s, age: %d\n", p->name, p->age);
}

//name: John, age: 30