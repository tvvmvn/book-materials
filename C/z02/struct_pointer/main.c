#include <stdio.h>
#include <string.h>

// 구조체 선언
typedef struct {
  char name[10];
  int age;
} Person;

int main() {
  // typedef을 활용해서 변수 선언이 더 간단해졌습니다
  Person* p;

  // 포인트로 멤버에 접근할 때는 .(점) 대신 ->(화살표)를 사용합니다.
  strcpy(p->name, "John");
  p->age = 30;

  printf("name: %s, age: %d\n", p->name, p->age);
}

//name: John, age: 30