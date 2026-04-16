# 포인터 (Pointer)

- 포인터 개념
- 포인터 생성하기
- 포인터 사용하기
- NULL 포인터
- void
- 함수와 포인터
- 배열과 포인터
- 문자열과 포인터
- 구조체와 포인터
- 포인터에 메모리 할당하기
<!-- void* -->


# 포인터 개념

포인터는 C언어의 강력한 기능 중 하나입니다.
다른 변수의 메모리 주소(Memory Address)를 값으로 가지는 변수를 포인터라고 부릅니다.

[Routine <> Subroutine]
포인터는 왜 쓸까요? 포인터를 활용해 ...할 수 있습니다.
- 함수에 주소 전달하기 => 메모리 절약 & 원본 값 바꾸기
- 동적으로 메모리 사용하기. malloc과 함께


# 포인터 생성하기

포인터의 자료형은 포인터가 가리키는 변수의 자료형과 같습니다. 
자료형 뒤에 *을 붙입니다.

```c
#include <stdio.h>

int main() {
  int n = 2;
  int* ptr = &n;
  
  printf("%p\n", ptr); 
  
  return 0;
}

// 0x7ff7bfeff1d8
```


# 역참조 (Reference & Dereference)

변수는 메모리 상에서 고유한 주소를 가지고 있습니다. 변수의 메모리 주소에 접근하는 것을 참조라고 합니다. &(참조 연산자)를 활용해 변수를 참조할 수 있습니다.

반대로 메모리 주소를 통해 변수의 값에 접근하는 것을 역참조라고 표현합니다. 메모리 주소 앞에 *(역참조 연산자)를 붙여 역참조 할 수 있습니다.


```c
#include <stdio.h>

int main() {
  int n = 2;
  int* ptr = &n;

  printf("%d\n", *ptr); 

  return 0;
}

// 2
```


# NULL 포인터

NULL은 포인터가 아무것도 가리키지 않고 있음을 나타내기 위해 대입하는 데이터입니다.

사용 사례 중 하나는 포인터 초기화입니다. 포인터를 선언할 때 값을 할당하지 않으면 랜덤 주소가 들어갑니다. 이로 인해 문제가 발생할 수 있으므로 포인터를 선언할 때 바로 쓸 게 아니라면 NULL로 초기화하세요.


```c
#include <stdio.h>

int main() {
  int* ptr = NULL;

  printf("%p\n", ptr); // 0x0

  return 0;
}
```


# void형 포인터

어떠한 자료형의 포인터도 저장할 수 있습니다. 하지만 포인터를 사용하려면(역참조, 포인터 연산 등) 반드시 형변환을 해야 합니다. 동적으로 메모리를 할당하는 함수가 반환하는 포인터가 이 void형 입니다.


```c
#include <stdio.h>

int main() {
  int n = 2;
  
  // all types
  void* p = &n;

  int* ptr = (int*)p;
  
  printf("%d", *ptr);
}
```


# 함수와 포인터

원래 함수에 전달한 값은 메모리에 복사됩니다.
메모리 절약 또는 원본 배열 수정을 위해

```c
#include <stdio.h>

// 포인터를 입력받는 함수
void f(int* addr) {
  // 포인터를 이용해 원본 변수에 접근할 수 있습니다.
  *addr = 10;
}

int main() {
  int n = 2;

  // 함수에 변수의 주소를 입력했습니다
  f(&n);

  printf("%d", n); 
}

//10
```

# 배열과 포인터

배열 이름은 포인터입니다.
배열에서 포인터 연산도 가능합니다.

```c
#include <stdio.h>

int main() {
  int myNumbers[] = {10, 20, 30, 40};

  // 첫번째 요소의 주소
  printf("%p\n", myNumbers);
  // 두번째 요소의 주소
  printf("%p\n", myNumbers + 1);
  // 세번째 요소의 주소
  printf("%p\n", myNumbers + 2);
  // 네번째 요소의 주소
  printf("%p\n", myNumbers + 3);
  
  return 0;
}

// 0x7ff7bfeff220
// 0x7ff7bfeff224
// 0x7ff7bfeff228
// 0x7ff7bfeff22c
```

# 문자열과 포인터

포인터를 이용해 문자열을 자동으로 크기 조절을 합니다!

```c
#include <stdio.h>

int main() {
  // greeting은 문자열 포인터입니다. 
  // 문자열 포인터를 사용해 문자열을 다룰 수도 있습니다.
  char* greeting = "hello";

  printf("%p\n", greeting);
  printf("%c\n", *greeting);
  printf("%s\n", greeting);
}

//0x100000f96
//h
//hello
```

# 구조체와 포인터

포인터 구조체에서 화살표(->)로 포인터의 멤버에 접근할 수 있습니다.

```c
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
```


# 메모리 동적 할당 (Dynamic Allocation)

사용자 입력을 바탕으로 프로그래밍하는 경우에 사용됩니다. 
malloc 함수로 메모리를 동적할당 합니다.

```
void* malloc(size)

기본적으로 void*를 반환하기 때문에 타입 캐스팅.
메모리 할당에 실패하면 NULL을 반환합니다.
```

다음 예제는 메모리를 동적으로 할당받고 포인터를 출력합니다.

```c
#include <stdio.h>
// stdlib (standard library) 헤더 추가
#include <stdlib.h>

int main() {
  int* ptr;

  ptr = (int*)malloc(sizeof(int));

  // 메모리 할당에 실패하면 프로그램을 종료시킵니다
  if (ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("%p\n", ptr); // 0x7fc2d9804130

  free(ptr);
  ptr = NULL;

  return 0;
}
```
