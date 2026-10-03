#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "apple";
  
  printf("%d\n", strcmp(s, "apple"));
  printf("%d\n", strcmp(s, "orange"));
}

// 0
// -14