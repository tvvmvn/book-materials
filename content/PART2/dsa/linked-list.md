# 물리적 구조와 코드 구현

<그림 - 물리적으로 표현한 연결 리스트>

연결 리스트는 배열과 비교하면 이해하기 쉽습니다. 배열과 달리 요소들이 물리적으로 붙어있지 않고 각 노드가 다음 노드의 주소를 기억하는 방식으로 묶여있습니다. 

따라서 각 노드가 다음 노드의 주소를 기억해야 하기 때문에 추가적인 기억 공간이 필요합니다. 

하지만 물리적으로 붙어있지 않기 때문에 자료를 중간에 추가하거나 자료를 삭제하는 등의 작업이 가능합니다. 

작업과 관련된 노드들의 주소만 조금 수정해주면 되기 때문입니다.


아래는 연결 리스트를 구현하고 순회하는 C 언어 코드입니다.

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
} Node;

Node* createNode(int data) {
  Node* newNode = (Node*)malloc(sizeof(Node));
  
  if (!newNode) {
    printf("메모리 할당에 실패했습니다\n");
    exit(1);
  }
  newNode->data = data;
  newNode->next = NULL;

  return newNode;
}

void printList(Node* node) {
  while (node) {
    printf("%d -> ", node->data);
    node = node->next;
  }
  printf("null\n");
}

int main() {
  // 노드 생성
  Node* node1 = createNode(3);
  Node* node2 = createNode(5);
  Node* node3 = createNode(13);
  Node* node4 = createNode(2);

  // 노드들을 연결합니다
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;

  // 리스트를 차례대로 순회합니다
  printList(node1);

  free(node1);
  free(node2);
  free(node3);
  free(node4);

  return 0;
}

// 3 -> 5 -> 13 -> 2 -> null
```