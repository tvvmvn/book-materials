#include <stdio.h>

struct Data {
  int x;
  const char* y;
};

int main() {
  struct Data t[] = {{1, "AB"}, {2, "DC"}, {3, "EB"}};
  struct Data *p = &t[1];

  printf("%s", p->y + (p->x - 1));

  return 0;
}
// C