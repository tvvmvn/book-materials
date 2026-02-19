# Pointer

- 메모리 주소
- 포인터 변수
- 역참조
<!-- void* -->


# 포인터 

포인터는 C언어의 강력한 기능 중 하나입니다.
다른 변수의 주소를 값으로 가지는 변수를 포인터라고 부릅니다.
...


# 참조 (Reference)

변수는 메모리 상에서 고유한 주소를 가지고 있습니다. 변수의 메모리 주소에 접근하는 것을 참조라고 합니다. &(참조 연산자)를 활용해 변수를 참조할 수 있습니다.

```c
int myAge = 30;

printf("%p", &myAge); // 0x7ffe5367e044
```


# 역참조 (Dereference)

반대로 메모리 주소를 통해 변수의 값에 접근하는 것을 역참조라고 표현합니다. 메모리 주소 앞에 *(역참조 연산자)를 붙여 역참조 할 수 있습니다.

```c
#include <stdio.h>

int main() {
  int n = 2;  

  printf("%p\n", &n); // 0x7ff7bfeff288
  printf("%d\n", *(&n)); // 2

  return 0;
}
```


# 포인터 생성하기

포인터의 자료형은 주소를 저장한 변수의 자료형과 같으며 자료형 뒤에 *을 붙입니다.

```c
#include <stdio.h>

int main() {
  int n = 2;  
  // pointer
  int* ptr = &n;  

  printf("%p\n", ptr); //0x7ffe5367e044
  printf("%d\n", *ptr); //2

  return 0;
}
```