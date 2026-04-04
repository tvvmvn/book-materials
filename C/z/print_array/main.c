#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30, 40};
  
  int size = 4;

  // 변수 i를 배열의 요소에 접근하기 위한 인덱스로 활용하고 있습니다
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

//10 20 30 40 
