#include <stdio.h>

void main() {
	char str[7] = { 's','t','r','i','n','g', '\0'};
	int i;
	printf("\n���� �迭 str[] : ");
	for (i = 0; str[i]; i++) {
		printf("%c", str[i]);
	}
	getchar();
}