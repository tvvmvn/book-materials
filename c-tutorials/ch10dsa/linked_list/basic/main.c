#include <stdio.h>
#include <stdlib.h>

// 노드 구조체
typedef struct _Node {
  // 데이터
  int data;
  // 포인터: 다음 노드를 가리킴
  struct _Node* next;
} Node;

// 노드를 생성하는 함수
Node* createNode(int data) {
  // 노드를 저장할 공간을 확보합니다
  Node* newNode = malloc(sizeof(Node));

  // 메모리 할당에 실패하면 프로그램을 종료함
  if (!newNode) {
    printf("Memory allocation failed!\n");
    exit(1);
  }

  // 데이터 할당 및 포인터 초기화
  newNode->data = data;
  newNode->next = NULL;
  // 생성한 노드 반환
  return newNode;
}

// 연결 리스트를 순회하는 함수
void printList(Node* node) {
  while (node) {
    // 현재 노드의 데이터를 출력합니다
    printf("%d -> ", node->data);
    // 다음 노드로 이동합니다.
    node = node->next;
  }
  // 마지막 노드가 가리키는 것
  printf("null");
}

int main() {
  // 데이터와 함께 노드 생성
  Node* node1 = createNode(7);
  Node* node2 = createNode(10);
  Node* node3 = createNode(3);
  Node* node4 = createNode(2);
  Node* node5 = createNode(9);

  // 노드 연결
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = node5;

  // 연결리스트 순회
  printList(node1);

  // 메모리 해제
  free(node1);
  free(node2);
  free(node3);
  free(node4);
  free(node5);

  return 0;
}

// 7 -> 10 -> 3 -> 2 -> 9 -> null
