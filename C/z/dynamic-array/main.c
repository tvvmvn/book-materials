#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr = NULL;
  int size;

  // user input 
  printf("enter size of array\n");
  scanf("%d", &size);

  // allocate memory according to input
  arr = (int*)malloc(size * sizeof(int)); 

  // memory allocation check
  if (arr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  // assign items
  int item;
  for (int i = 0; i < size; i++) {
    printf("item %d: ", i + 1);
    scanf("%d", &item);
    arr[i] = item;
  }

  // print array
  printf("your array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  // deallocate memory
  free(arr);
  arr = NULL;
  
  return 0;
}
