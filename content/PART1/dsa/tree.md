# 트리 (Tree)

계층 구조를 가지는 자료 구조입니다. 

*그림 - 트리 구조*

다음은 트리에서 사용되는 주요 용어들입니다.

- 위치에 따른 노드의 이름: 가장 맨 위에 있는 노드를 근노드, 가장 끝에 있는 노드들을 잎노드라고 합니다.

- 트리에서 나타날 수 있는 관계: 노드 A의 바로 밑에 있는 노드들을 자식 노드라고 하고 A를 부모 노드라고 합니다. 한 부모에서 나온 노드들을 형제 노드라고 합니다.

- 차수(Degree): 각 노드에서 뻗어나온 가지의 수를 의미합니다.

- 레벨과 깊이: 근노드의 레벨을 1이라고 할 때 아래로 갈수록 레벨은 1씩 증가합니다. 트리가 가질 수 있는 최대의 레벨을 깊이라고 합니다


트리는 어디에 사용될까요? 파일 구조, 계층 구조, ..


# 이진 트리 (Binary Tree)

A Binary Tree is a type of tree data structure where each node can have a maximum of two child nodes, a left child node and a right child node.

*그림 - 이진 트리*


# 이진 트리의 물리적 구조와 코드 구현

*그림 - 이진 트리의 메모리상 구조*


```c
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
  char data;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;

TreeNode* createNewNode(char data) {
  TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

int main() {
  TreeNode* root = createNewNode('R');
  TreeNode* nodeA = createNewNode('A');
  TreeNode* nodeB = createNewNode('B');
  TreeNode* nodeC = createNewNode('C');
  TreeNode* nodeD = createNewNode('D');
  TreeNode* nodeE = createNewNode('E');
  TreeNode* nodeF = createNewNode('F');
  TreeNode* nodeG = createNewNode('G');

  root->left = nodeA;
  root->right = nodeB;

  nodeA->left = nodeC;
  nodeA->right = nodeD;

  nodeB->left = nodeE;
  nodeB->right = nodeF;

  nodeF->left = nodeG;

  // Test
  printf("root->right->left->data: %c\n", root->right->left->data);

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

// root->right->left->data: E
```


# 이진 트리 운행법(Traversal)

이진 트리의 모든 노드들을 한번씩 방문하는 방법입니다

- Preorder
- Inorder
- Postorder


Preorder 운행법: Root -> 왼쪽 -> 오른쪽 순

*그림 - Preorder Traversal*


Inorder 운행법: 왼쪽 -> Root -> 오른쪽 순

*그림 - Inorder Traversal*


Postorder 운행법: 왼쪽 -> 오른쪽 순 -> Root

*그림 - Postorder Traversal*


```c
void inOrderTraversal(TreeNode* root) {
  if (root == NULL) {
    return;
  }
  inOrderTraversal(root->left);
  printf("%c, ", root->data);
  inOrderTraversal(root->right);
}
//C, A, D, R, E, B, G, F,
```

```c
void preOrderTraversal(TreeNode* root) {
  if (root == NULL) {
    return;
  }
  printf("%c, ", root->data);
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}
//R, A, C, D, B, E, F, G,
```

```c
void postOrderTraversal(TreeNode* root) {
  if (root == NULL) {
    return;
  }
  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  printf("%c, ", root->data);
}
// C, D, A, E, G, F, B, R,
```


# 이진 트리와 수식 연산

컴퓨터는 수학 연산을 이진 트리와 스택을 활용하여 처리합니다. 다음은 일반적으로 컴퓨터가 수학 연산을 처리하는 과정입니다.

1. 컴퓨터는 사용자가 수식(보통 Infix)을 입력하면 수식을 이진 트리로 변환합니다
2. Postorder 순회를 통해 Postfix 수식을 생성합니다.
3. 수식을 바탕으로 스택으로 구현하여 처리합니다.


다음은 수식의 종류입니다.

- Infix 수식: 연산자가 피연산자의 중간에 위치합니다. 사람이 읽고 쓰기 편한 수식입니다.
예) 1 + 2 * 3

- Postfix 수식: 연산자가 피연산자의 뒤에 위치합니다. 컴퓨터가 처리하기 가장 좋은 수식입니다.
예) 123*+

- Prefix 수식: 연산자가 피연산자의 앞에 위치합니다.
예) +1*23


다음은 사람이 수식을 변환하는 방법입니다. 컴퓨터처럼 트리를 그리고 순회를 해도 되지만 다음과 같은 괄호법이 더 간편합니다.

다음은 Infix에서 Prefix로 변환하는 방법입니다.
```
A +B * C

1. 연산자 우선순위에 따라 괄호를 칩니다
예) (A + (B * C))

2. 연산자를 각 괄호 안에서 앞에 위치시킵니다
예) (+A*(BC))

3. 모든 괄호를 제거하면 끝입니다
예) +A*BC
```

다음은 Infix에서 Postfix로 변환하는 방법입니다
```
A + B * C

1. (A + (B * C))
2. (A(BC*)+)
3. ABC*+
```

다음은 Postfix에서 Infix 변환하는 방법입니다.
```
ABC*+

1. (A(BC*)+)
2. (A + (B * C))
3. A + B * C
```