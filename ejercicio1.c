#include  <stdio.h>

#define N 3 // Se cambia este valor para probar distintas matrices

int main() {
	int matriz[N][N] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9} // Modificar llaves al trabajar con matrices mas grandes
	};

	int sumaDiagonal1 = 0, sumaDiagonal2 = 0;
	for (int i = 0; i < N; i++) {
		sumaDiagonal1 += matriz[i][i];
		sumaDiagonal2 += matriz[i][N - 1 - i];
	}

	int sumatotal = sumaDiagonal1 + sumaDiagonal2;

// Para casos en las que la matriz es impar

	if (N % 2 == 1) {
		sumatotal -= matriz[N / 2][N / 2];
	}

	printf("La suma de la primera diagonal es: %d\n", sumaDiagonal1);
	printf("La suma de la segunda diagonal es: %d\n", sumaDiagonal2);
	printf("La suma total de las diagonales es: %d\n", sumatotal);

	return 0;

}
