#include <stdio.h>
#include <stdlib.h>

int main() {

  int *ptr;

  // user input at runtime
  int n = 4;

  // allocate 12 bytes to pointer
  ptr = malloc(n * sizeof(*ptr)); 

  // error check
  if (ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  // pointer behaves like an array
  ptr[0] = 10;
  ptr[1] = 20;
  ptr[2] = 30;
  ptr[3] = 40;

  // check array
  for (int i = 0; i < n; i++) {
    printf("%d\n", ptr[i]);
  }

  // deallocate
  free(ptr);
  ptr = NULL;
  
  return 0;
}
