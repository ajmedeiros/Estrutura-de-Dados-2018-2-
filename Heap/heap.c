#include <stdio.h>

void heapify (int *vetor, int i, int N) {
	while (2 * i + 1 < N) {
		int filho = 2 * i + 1;

		if (filho + 1 < N && vetor[filho] < vetor[filho + 1]) {
			filho++;
		}

		if (vetor[i] >= vetor[filho]) {
			i = N;
		}
		else {
			int aux = vetor[i];
			vetor[i] = vetor[filho];
			vetor[filho] = aux;
			i = filho;
		}
	}
}

void heap (int *vetor, int N) {
	int i = 0;
	for (i = N/2; i >= 0; i--) {
		heapify (vetor, i, N);
	}
}

void heapSort (int *vetor, int N) {
	heap(vetor, N);
	int i;
	for (i = N - 1; i > 0; --i) {
		int aux = vetor[i];
		vetor[i] = vetor[0];
		vetor[0] = aux;
		heap (vetor, i);
	}
}

int main (int n_args, char **args) {
	int vetor[100] = {51, 50, 82, 14, 21, 26, 75, 69, 86, 56, 74, 19, 29, 72, 31, 13, 49, 79, 83, 16, 12, 34, 65, 25, 81, 59, 88, 45, 15, 24, 23, 47, 6, 73, 57, 46, 3, 85, 89, 67, 36, 52, 92, 58, 78, 62, 33, 18, 8, 41, 66, 48, 35, 37, 42, 40, 63, 91, 20, 4, 17, 77, 22, 61, 76, 71, 5, 97, 96, 64, 1, 53, 30, 39, 68, 32, 38, 98, 94, 2, 44, 100, 7, 55, 28, 84, 93, 90, 11, 99, 27, 54, 70, 43, 95, 9, 10, 87, 60, 80};
	heapSort (vetor, 100);
	

	int i;

	for (i = 0; i < 100; i++) {
		printf ("%d ", vetor[i]);
	}
	return 0;
}
