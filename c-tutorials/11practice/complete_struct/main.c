#include <stdio.h>

// 구조체 Person을 선언합니다
typedef struct {
  char name[10];
  int age;
} Person;

int main() {
  // 구조체 변수를 생성합니다
  Person person;

  // 이름을 입력받습니다. 문자열 변수에 값을 입력받을 때는 &가 필요없습니다
  printf("your name: ");
  scanf("%s", person.name);

  // 나이를 입력받습니다
  printf("your age: ");
  scanf("%d", &person.age);

  // 결과 출력
  printf("name: %s, age: %d", person.name, person.age);
}

// your name: john
// your age: 30
// name: john, age: 30