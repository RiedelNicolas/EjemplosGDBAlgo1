#include <stdio.h>

void swap (int* x, int* y);

int main () {
	int x = 78;
	int y = 86;
	swap (&x, &y);
	return 0;
}

void swap(int* a, int* b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
	return;
}
