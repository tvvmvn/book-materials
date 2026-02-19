# 트리 (Tree)

나무를 거꾸로 본 모습과 닮아서 트리(Tree)라고 불리며 계층 구조를 특징으로 하는 자료 구조입니다.

*그림 - 트리 구조*

위의 그림을 보며 트리의 구조를 자세히 알아봅시다. 위치에 따라 가장 맨 위에 있는 노드를 근노드(Root Node), 가장 끝에 있는 노드들을 잎노드(Leaf Node)라고 합니다. 위의 그림에서 근노드는 R, 잎 노드는 C, D, E, F, G, H 입니다.

트리에서 나타날 수 있는 관계에는 부모/자식, 형제 등이 있습니다. 한 레벨 차이가 노드들을 임의로 묶었을 때 위의 노드는 부모(Parent), 아래 노드를 자식(Child)이라고 합니다. 같은 부모를 가진 노드들을 형제(Sibling)라고 합니다. 위의 그림에서 B의 자식은 F, G이며 B는 F, G의 부모입니다. 

각 노드에서 뻗어나온 가지의 수를 차수(Degree)라고 부릅니다. 그림에서 A의 차수는 3이고 E의 차수는 1입니다.

트리는 계층 구조이기 때문에 레벨(Level)이 존재합니다. 근노드의 레벨을 1이라고 할 때 아래로 갈수록 레벨은 1씩 증가합니다. 여기서 트리가 가질 수 있는 최대의 레벨을 깊이(Depth)라고 합니다.


그렇다면 트리는 어디에 사용될까요? 파일 구조, 계층 구조, ..


# 이진 트리 (Binary Tree)

이진 트리는 각 노드가 최대 2개의 자식을 가질 수 있는 트리입니다. 자식을 위치에 따라 왼쪽 자식, 오른쪽 자식으로 부르기도 합니다. DSA에서 여러가지 방법으로 유용하게 쓰입니다.

*그림 - 이진 트리*


# 이진 트리의 물리적 구조와 코드 구현

이진 트리의 각 노드는 3개의 공간으로 구성됩니다. 우선 노드의 데이터를 저장하는 공간 1개가 가운데에 있고 나머지 두 노드는 각각 왼쪽 자식과 오른쪽 자식의 주소를 저장합니다.

*그림 - 이진 트리의 메모리상 구조*


다음은 위의 이진 트리를 구현하고 E 노드에 방문하는 과정을 나타낸 C 언어 코드입니다. 여기서 동적 메모리 할당 부분은 트리의 구조를 이해하는데 크게 중요하지는 않습니다. 참고만 하세요


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

이진 트리의 모든 노드들을 한번씩 방문하는 방법입니다. 근노드를 언제 방문할 것인지에 따라 다음의 3가지 운행법이 있습니다

- Preorder 운행법: 근노드를 우선 방문한 뒤 왼쪽 노드 -> 오른쪽 노드를 방문합니다

- Inorder 운행법: 근노드를 중간에 방문합니다. 왼쪽 노드 -> 근노드 -> 오른쪽 노드 순으로 방문합니다

- Postorder 운행법: 근노드를 마지막에 방문합니다. 왼쪽 -> 오른쪽 -> 근노드 순으로 방문합니다.


*그림 - Traversals*


# 이진 트리와 수식 연산의 관계

컴퓨터는 수학 연산을 이진 트리와 스택을 활용하여 처리합니다. 다음은 일반적으로 컴퓨터가 수학 연산을 처리하는 과정입니다.

1. 컴퓨터는 사용자가 수식(보통 Infix)을 입력하면 수식을 이진 트리로 변환합니다
2. Postorder 순회를 통해 Postfix 수식을 생성합니다.
3. 수식을 바탕으로 스택으로 구현하여 처리합니다.

다음은 수식의 종류입니다.

- Infix 수식: 연산자가 피연산자의 중간에 위치합니다. 사람이 읽고 쓰기 편한 수식입니다. 예) 1 + 2 * 3

- Postfix 수식: 연산자가 피연산자의 뒤에 위치합니다. 컴퓨터가 처리하기 가장 좋은 수식입니다. 예) 1 2 3 * +

- Prefix 수식: 연산자가 피연산자의 앞에 위치합니다. 예) + 1 * 2 3


# 수식 변환하기

다음은 사람이 수식을 변환하는 방법입니다. 컴퓨터처럼 트리를 그리고 순회를 해도 되지만 다음과 같은 괄호법이 더 간편합니다.

다음은 Infix로 표기된 A + B * C 를 Prefix 표기로 변환하는 방법입니다.

1. 연산자 우선 순위에 따라 괄호를 칩니다.
(A + (B * C))

2. 연산자를 각 괄호 안에서 앞에 위치시킵니다.
(+ A * (B C))

3. 모든 괄호를 제거합니다.
+ A * B C


다음은 Infix로 표기된 A + B * C를 Postfix 표기로 변환하는 방법입니다

1. 연산자 우선 순위에 따라 괄호를 칩니다
(A + (B * C))

2. 연산자를 각 괄호 안에서 뒤에 위치 시킵니다
(A (B C *) +)

3. 모든 괄호를 제거합니다.
A B C * +


다음은 Postfix로 표기된 A B C * + 를 Infix 표기로 변환하는 방법입니다.

1. Postfix는 연산자가 뒤에 위치하기 때문에 연산자와 그 앞의 2개의 피연산자를 괄호로 묶어줍니다.
(A (B C *)+)

2. 각 연산자를 피연산자 사이에 위치시킵니다.
(A + (B * C))

3. 모든 괄호를 제거합니다.
A + B * C