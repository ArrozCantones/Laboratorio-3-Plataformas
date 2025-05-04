#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Encabezados adicionales para el uso de las funciones rand



#define SIZE 5 //Valor cambiable

int findLargestLine(int matrix[SIZE][SIZE]) {

	int TamanoMaximo = 0;
	//LAs diagonales partiendo de la primera columna
	for (int fila = 0; fila < SIZE; fila++) {
		int i = fila, iC = 0, actual = 0;
		while (i < SIZE && iC < SIZE) {
			actual = (matrix[i][iC] == 1) ? actual + 1 : 0;
			if (actual > TamanoMaximo) TamanoMaximo = actual;
			i++; iC++;
		}
	}
	//Las diagonales partiendo de la primera fila sin incluior la principal
	for (int columna = 1; columna < SIZE; columna++) {
		int i = 0, iC = columna, actual = 0;
		while (i < SIZE && iC < SIZE) {
			actual = (matrix[i][iC] == 1) ? actual + 1 : 0;
			if (actual > TamanoMaximo) TamanoMaximo = actual;
			i++; iC++;
		}
	}

	return TamanoMaximo;

}

int main () {
	int matrix[SIZE][SIZE];

	// Se inicia el generador aleatorio con la funcion srand
	srand(time(NULL));
	// DEfinir que la matriz utilice 1 y 0 de forma aleatoria
	printf("La matriz utilizada corresponde a:\n");
	for (int i = 0; i < SIZE; i++) {
		for (int iC = 0; iC < SIZE; iC++) {
			matrix[i][iC] = rand() % 2;
			printf("%d ", matrix[i][iC]);
		}
		printf("\n");
	}


	int largestLine = findLargestLine(matrix);
	printf("El tamano de la secuencia de 1s mas grande es: %d\n", largestLine);

	return 0;

}

