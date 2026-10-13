#include <stdio.h>

int main() {
  // 입력값을 저장할 변수를 생성합니다
  char name[10];
  int age;

  // 1. 이름 입력받기
  printf("your name: ");
  // 문자열을 입력받을 때는 &(참조 연산자)가 필요없습니다
  scanf("%s", name);
  
  // 2. 나이 입력받기
  printf("your age: ");
  scanf("%d", &age);

  // 결과 보기
  printf("name: %s, age: %d", name, age);
}

// your name: john
// your age: 30
// name: john, age: 30