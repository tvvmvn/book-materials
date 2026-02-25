# 물리적 구조와 코드 구현

2차원 배열로 그래프를 나타내는 인접 행렬(Adjacency Matrix)을 표현합니다. 

*그림 - 그래프와 인접 행렬*

다음은 위의 그래프를 구현한 C 언어 코드입니다.


```c
#include <stdio.h>

void printConnections(int matrix[4][4], char vertices[4], int size) {
  printf("\nConnections for each vertex:\n");
  for (int i = 0; i < size; i++) {
    printf("%c: ", vertices[i]);
    for (int j = 0; j < size; j++) {
      if (matrix[i][j]) { 
        printf("%c ", vertices[j]);
      }
    }
    printf("\n");
  }
}

int main() {
  char vertices[4] = {'A', 'B', 'C', 'D'};
  int adjacencyMatrix[4][4] = {
    {0, 1, 1, 1}, 
    {1, 0, 1, 0}, 
    {1, 1, 0, 0}, 
    {1, 0, 0, 0}  
  };

  printConnections(adjacencyMatrix, vertices, 4);

  return 0;
}

// Connections for each vertex:
// A: B C D
// B: A C
// C: A B
// D: A
```