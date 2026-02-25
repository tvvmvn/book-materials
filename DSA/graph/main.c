#include <stdio.h>

int main() {
  char vertices[4] = {'A', 'B', 'C', 'D'};
  int adjacencyMatrix[4][4] = {
    {0, 1, 1, 1},
    {1, 0, 1, 0},
    {1, 1, 0, 0},
    {1, 0, 0, 0},
  };

  for (int r = 0; r < 4; r++) {
    printf("%c connections: ", vertices[r]);
    for (int c = 0; c < 4; c++) {
      if (adjacencyMatrix[r][c]) {
        printf("%c ", vertices[c]);
      }
    }
    printf("\n");
  }
}