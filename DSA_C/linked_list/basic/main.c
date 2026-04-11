#include <stdio.h>
#include <stdlib.h>

// 노드
typedef struct Node {
  // 노드의 데이터
  int data;
  // 다음 노드를 가리키는 포인터
  struct Node* next;
} Node;

// 노드를 생성하는 함수
Node* createNode(int data) {
  // 노드를 저장할 공간을 확보합니다
  Node* newNode = (Node*)malloc(sizeof(Node));

  // 메모리 할당에 실패하면 프로그램을 종료합니다.
  if (!newNode) {
    printf("Memory allocation failed!\n");
    exit(1);
  }

  // 노드에 입력받은 데이터를 할당합니다
  newNode->data = data;
  // 포인터는 일단 아무곳도 가리키지 않도록 합니다.
  newNode->next = NULL;
  // 완성된 노드를 반환합니다
  return newNode;
}

// 연결 리스트를 순회하는 함수입니다
void printList(Node* node) {
  while (node) {
    // 현재 노드의 데이터를 출력합니다
    printf("%d -> ", node->data);
    // 다음 노드로 이동합니다.
    node = node->next;
  }
  // 마지막 노드가 가리키는 건 null입니다
  printf("null\n");
}

int main() {
  // 노드들을 고유한 데이터와 함께 생성합니다.
  Node* node1 = createNode(3);
  Node* node2 = createNode(5);
  Node* node3 = createNode(13);
  Node* node4 = createNode(2);

  // 노드들을 연결합니다.
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;

  // 노드를 순회(출력)합니다
  printList(node1);

  // 메모리 해제
  free(node1);
  free(node2);
  free(node3);
  free(node4);

  return 0;
}

//C
// 3 -> 5 -> 13 -> 2 -> null
