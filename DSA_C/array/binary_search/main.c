#include <stdio.h>

// 이진 탐색을 수행하는 함수입니다
int binarySearch(int arr[], int size, int targetVal) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    // 현재 영역에서 중간값에 접근하기 위한 인덱스입니다
    int mid = (left + right) / 2;

    // 값이 위치한 위치(인덱스)를 찾았습니다!
    if (arr[mid] == targetVal) {
      return mid;
    }

    // 중간값 보다 찾는 숫자가 큰 경우 오른쪽 영역으로 이동할 준비를 합니다.
    if (arr[mid] < targetVal) {
      left = mid + 1;
    // 중간값 보다 찾는 숫자가 작은 경우 왼쪽 영역으로 이동할 준비를 합니다.
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  // 이진 탐색은 아래와 같이 요소가 정렬되어 있어야 합니다.
  int myArray[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  // 배열으로부터 찾을 숫자입니다.
  int myTarget = 15;
  // 사이즈는 40 / 4 = 10입니다.
  int size = sizeof(myArray) / sizeof(myArray[0]);

  // 찾는 숫자의 배열 내 위치를 반환합니다.
  int result = binarySearch(myArray, size, myTarget);

  if (result != -1) {
    printf("Value %d found at index %d\n", myTarget, result);
  } else { // 찾는 숫자가 배열에 존재하지 않는 경우입니다.
    printf("Target not found in array.\n");
  }

  return 0;
}

//C
// Value 15 found at index 7
