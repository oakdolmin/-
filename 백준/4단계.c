#include <stdio.h>

int main(void) {
	int a;
	int array[256];
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf_s("%d ", &array[i]);
	}
	printf("\n");
	for (int k = 0; k < a; k++) {
		printf("%d ", array[k]);
	}
	return 0;
}