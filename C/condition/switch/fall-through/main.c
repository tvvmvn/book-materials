#include <stdio.h>

int main() {
  int hour = 18;

  switch (hour) {
    case 9:
    case 10:
      printf("morning\n");
    case 17:
    case 18:
    case 19:
      printf("afternoon\n");
  }
}