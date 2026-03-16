#include <stdio.h>
#include <stdlib.h>

int main() {
  int* ptr = NULL;

  ptr = (int*)malloc(sizeof(int));

  if (ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("address: %p\n", ptr); // 0x7fc2d9804130

  free(ptr);
  ptr = NULL;

  return 0;
}