#include <stdio.h> // i/o
#include <stdlib.h> // Convertions

int main(int x, char** args) {
	int i, pos, last1, last2, suma;

	last1 = last2 = 1;
	suma = 0;

	pos = atoi(args[1]);

	for (i = 3; i <= pos; i++) {
		suma = last1 + last2;
		last2 = last1;
		last1 = suma;
	}

	printf("El número en la posición %d (contando desde 0) es: %d\n", pos, suma);

	return 0;

}
