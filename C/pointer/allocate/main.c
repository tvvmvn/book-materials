#include <stdio.h>
#include <stdlib.h>

int main() {
  // init pointer with null
  int* ptr = NULL;

  // allocate
  ptr = (int*)malloc(sizeof(int));

  // check allocation
  if (ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  // print memory info
  printf("address: %p\n", ptr); 
  printf("size: %lu\n", sizeof(*ptr)); 

  // deallocate
  free(ptr);
  ptr = NULL;

  return 0;
}

// address: 0x7fbdfb805be0
// size: 4
