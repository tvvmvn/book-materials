# 그래프 (Graph)

그래프는 정점(Node)과 간선(Vertex)으로 이루어지는 자료 구조입니다.
간선의 방향성 유무에 따라 방향 그래프와 무방향 그래프로 구분합니다. 

*그림 - 그래프*

그래프는 어디에 사용될까요?

- 네트워크
- 내비게이션


# 최대 간선수 구하기

n이 정점의 개수일 때 
방향 그래프의 최대 간선 수: n(n - 1)
무방향 그래프의 최대 간선 수: n(n - 1)/2

*그림 - 최대 간선수 예제*


# 물리적 구조와 코드 구현

일반적으로 2차원 배열로 그래프를 나타내는 인접 행렬(Adjacency Matrix)을 표현합니다.

*그림 - 그래프와 인접 행렬*


```c
#include <stdio.h>

void printConnections(int matrix[4][4], char vertices[4], int size) {
  printf("\nConnections for each vertex:\n");
  for (int i = 0; i < size; i++) {
    printf("%c: ", vertices[i]);
    for (int j = 0; j < size; j++) {
      if (matrix[i][j]) { // if there is a connection
        printf("%c ", vertices[j]);
      }
    }
    printf("\n");
  }
}

int main() {
  char vertexData[4] = {'A', 'B', 'C', 'D'};
  int adjacencyMatrix[4][4] = {
    {0, 1, 1, 1}, // Edges for A
    {1, 0, 1, 0}, // Edges for B
    {1, 1, 0, 0}, // Edges for C
    {1, 0, 0, 0} // Edges for D
  };

  printAdjacencyMatrix(adjacencyMatrix, 4);
  printConnections(adjacencyMatrix, vertexData, 4);

  return 0;
}

// Connections for each vertex:
// A: B C D
// B: A C
// C: A B
// D: A
```