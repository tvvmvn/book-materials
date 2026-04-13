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
