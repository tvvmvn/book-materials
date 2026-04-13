#include <stdio.h>
#include <stdlib.h>

int main() {
  // 포인터 변수를 선언합니다. 
  // NULL을 할당해서 현재는 아무곳도 가리키지 않고 있습니다
  int *arr = NULL;
  int size;

  // 사용자로부터 원하는 배열의 크기를 입력받습니다
  printf("enter size of array: ");
  scanf("%d", &size);

  // 입력받은 사이즈만큼 메모리를 확보합니다
  arr = (int*)malloc(size * sizeof(int)); 

  // 할당에 실패하면 프로그램을 종료합니다
  if (arr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  // 입력받은 사이즈만큼 배열의 요소를 입력받습니다
  int item;
  for (int i = 0; i < size; i++) {
    printf("item %d: ", i + 1);
    scanf("%d", &item);
    arr[i] = item;
  }

  // 배열을 출력합니다
  printf("your array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  // 변수 사용이 완료됬으면 arr에게 할당한 공간을 비웁니다.
  free(arr);
  // 다시 NULL로 지정하는 것이 안전합니다.
  arr = NULL;
  
  return 0;
}

// enter size of array: 3
// item 1: 10
// item 2: 20
// item 3: 30
// your array: 10 20 30 