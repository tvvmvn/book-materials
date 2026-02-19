#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30, 40};
  int length = sizeof(arr) / sizeof(arr[0]);

  printf("elements: ");
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  //elements: 10 20 30 40 
  
  return 0;
}

