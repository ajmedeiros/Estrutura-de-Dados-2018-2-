#include <stdio.h>

//provavel falha de memoria com tamanhos grandes
#define MAX 500

void selection (int *vetor, int TAM, int i, int j) {
	if (i < TAM && j < TAM && vetor[i] > vetor[j]) {
		int aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}

	if (j > i && j < TAM) {
		selection (vetor, TAM, i, j + 1);
	}

	if (i < TAM && j == TAM - 1) {
		selection (vetor, TAM, i + 1, i + 2);
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

	selection (vetor, TAM, 0, 1);

	for (i = 0; i < TAM; i++) {
		printf ("%d ", vetor[i]);
	}

	printf ("\n");

	return 0;
}
