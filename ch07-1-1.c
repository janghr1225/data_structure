#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct treeNode {	// ���� �ڷᱸ���� �����ϱ� ���� Ʈ���� ��� ����
	char data;
	struct treeNode *left;  // ���� ���� Ʈ���� ���� ��ũ �ʵ�
	struct treeNode *right; // ������ ���� Ʈ���� ���� ��ũ �ʵ�
} treeNode;

// data�� ��Ʈ ���� �Ͽ� ���� ���� Ʈ���� ������ ���� Ʈ���� �����ϴ� ����
treeNode* makeRootNode(char data, treeNode* leftNode, treeNode* rightNode) {

}

// ���� Ʈ���� ���� ���� ��ȸ ����
void preorder(treeNode* root) {

}

// ���� Ʈ���� ���� ���� ��ȸ ����
void inorder(treeNode* root) {

}

// ���� Ʈ���� ���� ���� ��ȸ ����
void postorder(treeNode* root) {

}

void main() {
	// (A*B-C/D) ���� ���� Ʈ�� �����
	treeNode* n7 = makeRootNode('D', NULL, NULL);
	treeNode* n6 = makeRootNode('C', NULL, NULL);
	treeNode* n5 = makeRootNode('B', NULL, NULL);
	treeNode* n4 = makeRootNode('A', NULL, NULL);
	treeNode* n3 = makeRootNode('/', n6, n7);
	treeNode* n2 = makeRootNode('*', n4, n5);
	treeNode* n1 = makeRootNode('-', n2, n3);

	printf("\n preorder : ");
	preorder(n1);

	printf("\n inorder : ");
	inorder(n1);

	printf("\n postorder : ");
	postorder(n1);

	getchar();
}