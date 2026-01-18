# 그래프

그래프는 정점과 간선으로 이루어지는 자료구조입니다.
간선의 방향성 유무에 따라 방향 그래프와 무방향 그래프로 구분합니다.
사이클이 없는 그래프는 트리라고 합니다.

- Social Networks: Each person is a vertex, and relationships (like friendships) are the edges. Algorithms can suggest potential friends.
- Maps and Navigation: Locations, like a town or bus stops, are stored as vertices, and roads are stored as edges. Algorithms can find the shortest route between two locations when stored as a Graph.
- Internet: Can be represented as a Graph, with web pages as vertices and hyperlinks as edges.
- Biology: Graphs can model systems like neural networks or the spread of diseases.

*그림 - 그래프*


# 최대 간선수 구하기

n이 정점의 개수일 때 
방향 그래프의 최대 간선 수: n(n - 1)
무방향 그래프의 최대 간선 수: n(n - 1)/2

*그림 - 최대 간선수 예제*


# 코드 구현

```c
#include <stdio.h>

void printConnections(int matrix[4][4], char vertices[4], int size) {
    printf("\nConnections for each vertex:\n");
    for (int i = 0; i < size; i++) {
        printf("%c: ", vertices[i]);
        for (int j = 0; j < size; j++) {
            if (matrix[i][j]) {  // if there is a connection
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
        {1, 0, 0, 0}  // Edges for D
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