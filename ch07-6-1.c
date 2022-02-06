#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEMENT 100

// ������ ���� 1���� �迭�� ���� ������ ������ ����ü�� ��� ����
typedef struct {
	int heap[MAX_ELEMENT];
	int heap_size;
} heapType;

// ���� ������ �����ϴ� ����
heapType* createHeap() {
	heapType *h = (heapType*)malloc(sizeof(heapType));
	h->heap_size = 0;
	return h;
}

// ������ item�� �����ϴ� ����
void insertHeap(heapType *h, int item) {
	int i;
	h->heap_size = h->heap_size + 1;
	i = h->heap_size;
	while ((i != 1) && (item > h->heap[i / 2])) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = item;
}

// ������ ��Ʈ�� �����Ͽ� ��ȯ�ϴ� ����
int deleteHeap(heapType *h) {

}

// 1���� �迭 ������ ������ ����ϴ� ����
void printHeap(heapType *h) {

}

void main() {
	int i, n, item;
	heapType *heap = createHeap();
	insertHeap(heap, 10);
	insertHeap(heap, 45);
	insertHeap(heap, 19);
	insertHeap(heap, 11);
	insertHeap(heap, 96);

	printHeap(heap);
	
	n = heap->heap_size;
	for (i = 1; i <= n; i++) {
		item = deleteHeap(heap);
		printf("\n delete : [%d] ", item);
	}

	getchar();
}