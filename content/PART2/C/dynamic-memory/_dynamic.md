# 메모리 동적 할당 (Dynamic Allocation)

사용자 입력을 바탕으로 프로그래밍하는 경우에 사용됩니다.

```
void* malloc(size)
```
기본적으로 void*를 반환하기 때문에 타입 캐스팅


다음 예제는 메모리를 동적으로 할당받고 포인터 정보를 출력합니다.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
  int* ptr;

  ptr = (int*)malloc(sizeof(int));
  // ptr = malloc(sizeof(*ptr));

  if (ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("%p\n", ptr); // 0x7fc2d9804130
  printf("%lu\n", sizeof(ptr)); // 8

  free(ptr);
  ptr = NULL;

  return 0;
}
```


다음은 동적으로 배열의 크기를 정하고 원소를 할당하는 코드입니다.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {

  int *ptr;

  // user input at runtime
  int n = 4;

  // allocate 12 bytes to pointer
  ptr = malloc(n * sizeof(*ptr)); 

  // error check
  if (ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  // pointer behaves like an array
  ptr[0] = 10;
  ptr[1] = 20;
  ptr[2] = 30;
  ptr[3] = 40;

  // check array
  for (int i = 0; i < n; i++) {
    printf("%d\n", ptr[i]);
  }

  // deallocate
  free(ptr);
  ptr = NULL;
  
  return 0;
}
```