#include <stdio.h>
#include <stdlib.h>

// 트리 노드 
typedef struct TreeNode {
  // 트리의 데이터
  char data;
  // 왼쪽 자식을 가리키는 포인터
  struct TreeNode* left;
  // 오른쪽 자식을 가리키는 포인터
  struct TreeNode* right;
} TreeNode;

// 노드를 생성하는 함수
TreeNode* createNewNode(char data) {
  // 노드 포인터 생성
  TreeNode* newNode = malloc(sizeof(TreeNode));
  // 데이터 할당
  newNode->data = data;
  // 자식 포인터 초기화
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// 노드를 전위 순회(Preorder)하는 함수 
void preOrderTraversal(TreeNode* root) {
  if (root == NULL) {
    return;
  }
  // 데이터를 출력합니다
  printf("%c, ", root->data);
  // 왼쪽 자식으로 이동
  preOrderTraversal(root->left);
  // 오른쪽 자식으로 이동
  preOrderTraversal(root->right);
}

int main() {
  // 트리 노드를 생성합니다
  TreeNode* root = createNewNode('R');
  TreeNode* nodeA = createNewNode('A');
  TreeNode* nodeB = createNewNode('B');
  TreeNode* nodeC = createNewNode('C');
  TreeNode* nodeD = createNewNode('D');
  TreeNode* nodeE = createNewNode('E');
  TreeNode* nodeF = createNewNode('F');
  TreeNode* nodeG = createNewNode('G');

  // 노드들을 연결해 트리 생성
  root->left = nodeA;
  root->right = nodeB;
  nodeA->left = nodeC;
  nodeA->right = nodeD;
  nodeB->left = nodeE;
  nodeB->right = nodeF;
  nodeF->left = nodeG;

  // 트리 순회
  preOrderTraversal(root);

  // 메모리 해제
  free(nodeG);
  free(nodeF);
  free(nodeE);
  free(nodeB);
  free(nodeC);
  free(nodeD);
  free(nodeA);
  free(root);

  return 0;
}

// R, A, C, D, B, E, F, G, 
