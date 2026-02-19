# 그래프 (Graph)

그래프는 정점(Vertex)과 그 정점들을 잇는 간선(Edge)으로 구성되는 자료 구조입니다. 복잡한 데이터들 간의 관계를 표현하기에 적합한 자료구조입니다

다음과 같이 여러가지 형태의 그래프로 구분할 수 있습니다

*그림 - 그래프의 종류들*

그래프는 어디에 사용될까요? 인터넷과 같은 네트워크 구성, 교통 내비게이션, SNS 에서 친구 관계 등 복잡한 관계를 가진 자료들을 표현하는데 사용됩니다.


# 최대 간선수 구하기

정점의 개수가 n일 때 다음과 같이 최대 간선수를 구할 수 있습니다.

- 방향 그래프의 최대 간선 수: n(n - 1)
- 무방향 그래프의 최대 간선 수: n(n - 1)/2

*그림 - 최대 간선수 예제*


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