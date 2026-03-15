#include <stdio.h>
#include <string.h>

int main() {
  char s1[20] = "hello";
  char s2[] = " world";
  
  strcat(s1, s2);

  printf("%s", s1);
}