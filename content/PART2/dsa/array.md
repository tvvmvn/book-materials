# 물리적 구조와 코드 구현

배열에서 구성 요소들이 메모리 상에서 일렬로 붙어 있습니다. 각 요소는 고유한 인덱스(Index)를 가지며 인덱스를 알면 특정 요소에 한번에 접근할 수 있습니다.

물리적으로 붙어있기 때문에 중간에 자료를 삽입하거나 특정 요소를 삭제하는 등의 작업을 하기 어렵습니다. 반면 구성 요소들을 활용하여 반복적인 작업을 할 때에는 이 특징이 장점이 됩니다.

<그림 - 메모리 상에서의 배열 모습>

다음은 배열을 선언하고 인덱스로 특정 요소에 접근하는 C 언어 프로그램입니다.


```c
#include <stdio.h>

int main() {
  int arr[] = {5, 12, 9, 4, 10};

  printf("첫번째 요소: %d\n", arr[0]);
  printf("두번째 요소: %d\n", arr[1]);
  printf("마지막 요소: %d\n", arr[4]);

  return 0;
}

// 첫번째 요소: 5
// 두번째 요소: 12
// 마지막 요소: 10
```


# C 언어로 구현한 버블 정렬


```c
#include <stdio.h>

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i-1; j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  printf("결과: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

// 결과: 5 11 12 22 25 34 64 90
```