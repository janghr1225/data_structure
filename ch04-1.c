#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �ܼ� ���� ����Ʈ�� ��� ������ ����ü�� ����
typedef struct _ListNode {
	char data[4];
	struct _ListNode *link;
} listNode;

// ����Ʈ�� ������ ��Ÿ���� head ��带 ����ü�� ����
typedef struct {
	listNode *head;
} linkedList;

// ���� ���� ����Ʈ�� �����ϴ� ����
linkedList *createlinkedList(void) {
	linkedList *L;
	L = (linkedList *)malloc(sizeof(linkedList));
	L->head = NULL;	// ���� ����Ʈ�̹Ƿ� NULL�� ����
	return L;
}

// ù ��° ���� �����ϴ� ����
void insertFirstNode(linkedList *L, char *x) {
	listNode *newNode;
	newNode = (listNode*)malloc(sizeof(listNode));	// ������ �� ��� �Ҵ�
	strcpy(newNode->data, x);						// �� ����� ������ �ʵ忡 x ����  
	newNode->link = L->head;
	
	L->head = newNode;
}


// ��带 pre �ڿ� �����ϴ� ����
void insertMiddleNode(linkedList *L, listNode *pre, char*x) {
	listNode *newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (L == NULL) {				// ���� ����Ʈ�� ���
		newNode->link = NULL;		// �� ��带 ù ��°���� ������ ���� ����
		L->head = newNode;
	}
	else if (pre == NULL) {			// ���� ��ġ�� �����ϴ� ������ pre�� NULL�� ���
		L->head = newNode;			// �� ��带 ù ��° ���� ����
	}
	else {
		newNode->link = pre->link;	// ������ pre�� ��� �ڿ� �� ��� ����
		pre->link = newNode;
	}
}

// ������ ���� �����ϴ� ���� 
void insertLastNode(linkedList *L, char *x) {
	listNode *newNode;
	listNode *temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (L->head == NULL) {		// ���� ����Ʈ�� ������ ���					
		L->head = newNode;		// �� ��带 ����Ʈ�� ���� ���� ����
		return;
	}
	// ���� ����Ʈ�� ������ �ƴ� ��� 	
	temp = L->head;
	while (temp->link != NULL) temp = temp->link;	// ���� ����Ʈ�� ������ ��带 ã��
	temp->link = newNode;							// �� ��带 ������ ���(temp)�� ���� ���� ���� 
}


// ���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
void freelinkedList(linkedList *L) {
	listNode *p;
	while (L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);
		p = NULL;
	}
}

// ���� ����Ʈ�� ������� ����ϴ� ����
void printList(linkedList *L) {
	listNode *p;
	printf("L = (");
	p = L->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL) printf(", ");
	}
	printf(") \n");
}

int main() {
	linkedList *L;
	L = createlinkedList();
	printf("(1) ���� ����Ʈ �����ϱ�! \n");
	printList(L); getchar();

	printf("(2) ����Ʈ�� [��] ��� �����ϱ�! \n");
	insertFirstNode(L, "��");
	printList(L); getchar();

	printf("(3) ����Ʈ �������� [��] ��� �����ϱ�! \n");
	insertLastNode(L, "��");
	printList(L); getchar();

	printf("(4) ����Ʈ ù ��°�� [��] ��� �����ϱ�! \n");
	insertFirstNode(L, "��");
	printList(L); getchar();

	printf("(5) ����Ʈ ������ �����Ͽ� ���� ����Ʈ�� �����! \n");
	freelinkedList(L);
	printList(L);

	getchar();

	return 0;
}