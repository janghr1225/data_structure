#include<stdio.h> 
#include<stdlib.h> 

typedef char element;		// 이진 탐색 트리 element의 자료형을 char로 정의
typedef struct treeNode {
	char key;				// 데이터 필드
	struct treeNode* left;	// 왼쪽 서브 트리 링크 필드
	struct treeNode* right;	// 오른쪽 서브 트리 링크 필드
} treeNode;

// 이진 탐색 트리에서 키값이 x인 노드의 위치를 탐색하는 연산
treeNode* searchBST(treeNode* root, char x) {

}

// 포인터 p가 가리키는 노드와 비교하여 노드 x를 삽입하는 연산
treeNode* insertNode(treeNode *p, char x) {

}

// 루트 노드부터 탐색하여 키값과 같은 노드를 찾아 삭제하는 연산
void deleteNode(treeNode *root, element key) {

}

// 이진 탐색 트리를 중위 순회하면서 출력하는 연산
void displayInorder(treeNode* root){

}

void menu() {
	printf("\n*---------------------------*");
	printf("\n\t1 : 트리 출력");
	printf("\n\t2 : 문자 삽입");
	printf("\n\t3 : 문자 삭제");
	printf("\n\t4 : 문자 검색");
	printf("\n\t5 : 종료");
	printf("\n*---------------------------*");
	printf("\n메뉴입력 >> ");
}

int main() {
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	char choice, key;

	// [그림 7-38]과 같은 초기 이진 탐색 트리를 구성하고 
	// 노드 G를 루트 노드 포인터 root로 지정
	root = insertNode(root, 'G');
	insertNode(root, 'I');
	insertNode(root, 'H');
	insertNode(root, 'D');
	insertNode(root, 'B');
	insertNode(root, 'M');
	insertNode(root, 'N');
	insertNode(root, 'A');
	insertNode(root, 'J');
	insertNode(root, 'E');
	insertNode(root, 'Q');

	while (1) {
		menu();
		scanf(" %c", &choice);

		switch (choice - '0') {
		case 1:	printf("\t[이진 트리 출력]  ");
			displayInorder(root);  printf("\n");
			break;

		case 2:	printf("삽입할 문자를 입력하세요 : ");
			scanf(" %c", &key);
			insertNode(root, key);
			break;

		case 3:	printf("삭제할 문자를 입력하세요 : ");
			scanf(" %c", &key);
			deleteNode(root, key);
			break;

		case 4: printf("찾을 문자를 입력하세요 : ");
			scanf(" %c", &key);
			foundedNode = searchBST(root, key);
			if (foundedNode != NULL)
				printf("\n %c를 찾았습니다! \n", foundedNode->key);
			else  printf("\n 문자를 찾지 못했습니다. \n");
			break;

		case 5: 	return 0;

		default: printf("없는 메뉴입니다. 메뉴를 다시 선택하세요! \n");
			break;
		}
	}
}