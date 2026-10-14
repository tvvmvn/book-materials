#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

// 그래프 구조체
typedef struct Graph {
  // 인접 행렬(Adjacency Matrix): 그래프를 표현하는 핵심 자료구조
  int adjMatrix[SIZE][SIZE];
  // 그래프에 속한 정점들
  char vertexData[SIZE];
} Graph;

// 그래프를 초기화하는 함수
void initGraph(Graph *g) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      g->adjMatrix[i][j] = 0;
    }
    g->vertexData[i] = 0;
  }
}

// 두 정점 간에 간선을 추가하는 함수
void addEdge(Graph *g, int u, int v) {
  // 그래프 범위를 벗어나지 않았는지 검사
  if (u >= 0 && u < SIZE && v >= 0 && v < SIZE) {
    // 무방향 그래프에서는 아래와 같이 두 값이 모두 on(1)
    g->adjMatrix[u][v] = 1;
    g->adjMatrix[v][u] = 1;
  }
}

// 정점을 추가하는 함수
void addVertexData(Graph *g, int v, char data) {
  // 그래프 범위를 벗어나지 않았는지 검사
  if (v >= 0 && v < SIZE) {
    // 정점 추가
    g->vertexData[v] = data;
  }
}

// 그래프를 출력하는 함수
void printGraph(Graph *g) {
  // 인접 행렬을 출력합니다
  printf("Adjacency Matrix:\n");
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf("%d ", g->adjMatrix[i][j]);
    }
    printf("\n");
  }

  // 그래프에 존재하는 모든 정점 출력
  printf("\nVertices:\n");
  for (int i = 0; i < SIZE; i++) {
    printf("%c(%d) ", g->vertexData[i], i);
  }
}

int main() {
  // 그래프 생성 및 초기화
  Graph g;
  initGraph(&g);

  // 4개의 정점 A, B, C, D를 추가합니다
  addVertexData(&g, 0, 'A');
  addVertexData(&g, 1, 'B');
  addVertexData(&g, 2, 'C');
  addVertexData(&g, 3, 'D');

  // 정점 간 간선을 생성합니다 
  addEdge(&g, 0, 1); // A, B 연결
  addEdge(&g, 0, 2); // A, C 연결
  addEdge(&g, 0, 3); // A, D 연결
  addEdge(&g, 1, 2); // B, C 연결

  // 그래프 출력
  printGraph(&g);

  return 0;
}

// Adjacency Matrix:
// 0 1 1 1
// 1 0 1 0
// 1 1 0 0
// 1 0 0 0

// Vertices:
// A(0) B(1) C(2) D(3) 