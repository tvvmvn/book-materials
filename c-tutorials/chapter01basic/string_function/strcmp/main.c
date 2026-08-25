#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "apple";
  char s2[] = "apple";
  char s3[] = "orange";
  
  printf("%d\n", strcmp(s1, s2));
  printf("%d\n", strcmp(s1, s3));
  printf("%d\n", strcmp(s3, s1));
}

// 0
// -14
// 14