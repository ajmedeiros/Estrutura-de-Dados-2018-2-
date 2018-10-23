#include <stdio.h>

#define MAX_N 5
#define MAX_M 5

int poladrao (int X[MAX_N][MAX_M], int i, int j) {
	if (i == MAX_N && j == MAX_M) {
		return 1;
	}

	else if (X[i][j] == 1) {
		return 0;
	}

	else {
		int poladrao_i = 0, poladrao_j = 0, poladrao_ii = 0, poladrao_jj = 0;

		X[i][j] = 1;

		if (i < MAX_N) {
			poladrao_i = poladrao (X, i + 1, j);
		}

		if (j < MAX_M) {
			poladrao_j = poladrao (X, i, j + 1);
		}

		if (i > 0) {
			poladrao_ii = poladrao (X, i - 1, j);
		}

		if (j > 0) {
			poladrao_jj = poladrao (X, i, j - 1);
		}		

		return poladrao_i || poladrao_j || poladrao_ii || poladrao_jj;
	}
}

int main () {
	int X[MAX_N][MAX_M];

	int i, j;

	for (i = 0; i < MAX_N; i++) {
		for (j = 0; j < MAX_M; j++) {
			scanf ("%d", &X[i][j]);
		}
	}

	int poladraoR = poladrao (X, 0, 0);

	if (poladraoR) {
		printf ("Tem caminho\n");
	}
	else {
		printf ("Nao tem caminho\n");
	}

	return 0;
}
