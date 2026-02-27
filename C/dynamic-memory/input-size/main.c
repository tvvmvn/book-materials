#include <stdio.h>
#include <stdlib.h>

int main() {
  int* ptr;
  int size;

  printf("how many: ");
  scanf("%d", &size);

  ptr = (int*)malloc(size * sizeof(int));

  if (ptr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("your memories: \n");
  for (int i = 0; i < size; i++) {
    printf("%p\n", ptr + i);
  }

  free(ptr);
  ptr = NULL;

  return 0;
}

// how many: 4
// your memories: 
// 0x600000494000
// 0x600000494004
// 0x600000494008
// 0x60000049400c