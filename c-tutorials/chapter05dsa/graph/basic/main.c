#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

// 그래프 구조체
typedef struct Graph {
  // 그래프를 표현하는 핵심 자료구조인 인접 행렬(Adjacency Matrix)입니다.
  int adjMatrix[SIZE][SIZE];
  // 그래프에 존재하는 정점들
  char vertexData[SIZE];
} Graph;

// 그래프를 초기화하는 함수입니다
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
  // 인접 행렬의 범위를 벗어나지 않으면 추가합니다.
  if (u >= 0 && u < SIZE && v >= 0 && v < SIZE) {
    // 무방향 그래프에서는 아래와 같이 두 위치가 모두 on입니다
    g->adjMatrix[u][v] = 1;
    g->adjMatrix[v][u] = 1;
  }
}

// 정점을 추가하는 함수
void addVertexData(Graph *g, int v, char data) {
  // 마찬가지로 정점을 추가할 위치가 주어진 크기를 벗어나지 않아야합니다
  if (v >= 0 && v < SIZE) {
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

  // 그래프에 존재하는 모든 정점을 출력합니다
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

//C
// Adjacency Matrix:
// 0 1 1 1
// 1 0 1 0
// 1 1 0 0
// 1 0 0 0

// Vertices:
// A(0) B(1) C(2) D(3) 