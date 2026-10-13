#include <stdio.h>
#include <string.h>

// 구조체 정의
struct Person{
  char name[10];
  int age;
};

int main() {
  // 구조체 포인터 생성
  struct Person* p;

  // 멤버 정의하기
  strcpy(p->name, "John");
  p->age = 30;

  // 멤버에 접근하기
  printf("name: %s, age: %d\n", p->name, p->age);
}

//name: John, age: 30