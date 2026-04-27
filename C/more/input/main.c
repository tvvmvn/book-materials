#include <stdio.h>

int main() {
  char name[10];
  int age;

  printf("your name: ");
  // 문자열을 입력받을 때는 &(참조 연산자)가 필요없습니다
  scanf("%s", name);
  
  printf("your age: ");
  scanf("%d", &age);

  printf("name: %s, age: %d", name, age);
}

// your name: john
// your age: 30
// name: john, age: 30