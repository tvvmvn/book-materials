# 사용자 입력받기

scanf() 함수를 주로 사용합니다. 

```
scanf(서식 지정자, 변수 주소)
```

문자열을 입력받을 때는 변수 이름 앞에 &(참조 연산자)를 사용할 필요가 없다는 점 참고하세요.

```c
#include <stdio.h>

int main() {
  char name[10];
  int age;

  printf("your name\n");
  scanf("%s", name);
  
  printf("your age\n");
  scanf("%d", &age);

  printf("your name: %s\n your age: %d", name, age);
}
```

