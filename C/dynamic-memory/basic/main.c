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