#include <stdio.h>

void display(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int a[] = {10, 20, 30, 40};
  int b[] = {3, 6, 9};

  display(a, 4);// 10 20 30 40 
  display(b, 3);// 3 6 9 
}
