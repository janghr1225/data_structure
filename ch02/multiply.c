#include <stdio.h>
void main() {
	int i = 0, n;
	int multiply = 0;
	/*printf("\n1~9의 정수를 입력하세요 : ");

	while (1) {
		scanf("%d", &n);
		if (n < 0 || n>9)
			printf("\n1~9의 정수를 입력하세요 : ");
		else
			break;
	}*/

	do {
		printf("\n1~9의 정수를 입력하세요 : ");
		scanf("%d", &n);
	} while (n < 0 || n>9);

	printf("\n");
	for (i = 0; i < 9; i++) {
		multiply = n * (i + 1);
		printf(" %d*%d = %d \n", n, (i + 1), multiply);
	}

	getchar();
	return 0;
}
