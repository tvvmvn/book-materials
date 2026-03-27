#include <stdio.h>
#include <stdlib.h>

int main() {
  int* ptr = NULL;

  ptr = (int*)malloc(sizeof(int));

  if (ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("address: %p\n", ptr); 

  free(ptr);
  ptr = NULL;

  return 0;
}

//address: 0x7f79ecf04130
