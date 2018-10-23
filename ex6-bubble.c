#include <stdio.h>

//provavel falha de memoria com tamanhos grandes
#define MAX 300

void bubble (int *vetor, int TAM, int i, int j) {
	if (i < TAM && j < TAM - 1 && vetor[j] > vetor[j + 1]) {
		int aux = vetor[j];
		vetor[j] = vetor[j + 1];
		vetor[j + 1] = aux;
	}

	if (j < TAM - 1) {
		bubble (vetor, TAM, i, j + 1);
	}

	if (i < TAM && j == TAM - 1) {
		bubble (vetor, TAM, i + 1, 0);
	}
}

int main () {
	int vetor[MAX];
	int TAM = 0;
	int i = 0;

	scanf ("%d", &TAM);

	for (i = 0; i < TAM; i++) {
		vetor[i] = TAM - i;
	}

	bubble (vetor, TAM, 0, 0);

	for (i = 0; i < TAM; i++) {
		printf ("%d ", vetor[i]);
	}

	printf ("\n");

	return 0;
}
