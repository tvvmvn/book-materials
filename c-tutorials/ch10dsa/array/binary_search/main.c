#include <stdio.h>

// 이진 탐색을 수행하는 함수
int binarySearch(int arr[], int size, int targetVal) {
  int left = 0;
  int right = size - 1;

  // 유효한 범위인 경우 탐색을 계속 진행합니다
  while (left <= right) {
    // 현재 영역에서 중간값의 인덱스
    int mid = (left + right) / 2;

    // 목표물을 찾았습니다!
    if (arr[mid] == targetVal) {
      // 목표물의 인덱스 반환
      return mid;
    }

    // 목표물이 중간값 보다 큰 경우 오른쪽 영역으로 이동
    if (arr[mid] < targetVal) {
      left = mid + 1;
    // 목표물이 중간값 보다 작은 경우 왼쪽 영역으로 이동
    } else {
      right = mid - 1;
    }
  }

  // 목표물을 찾지 못한 경우 -1 반환
  return -1;
}

int main() {
  // 이진 탐색은 요소가 정렬되어 있어야 합니다.
  int myArray[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  // 목표물: 15
  int myTarget = 15;
  // 요소 개수: 10개
  int size = sizeof(myArray) / sizeof(myArray[0]);

  // 목표물이 위치한 인덱스
  int result = binarySearch(myArray, size, myTarget);

  // 목표물이 있는 경우
  if (result != -1) {
    // 결과 출력
    printf("%d found at index %d\n", myTarget, result);
  // 목표물이 배열에 존재하지 않는 경우입니다.
  } else { 
    printf("Target not found.\n");
  }

  return 0;
}

// 15 found at index 7
