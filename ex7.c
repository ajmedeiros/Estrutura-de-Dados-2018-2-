#include <stdio.h>

int N;
char str[1000];

void printa_parenteses (int n, int aberto, int fechado) {
	if (fechado == N) {
		printf ("%s\n", str);
		return;
	}

	if (aberto < N) {
		str[n] = '(';
		printa_parenteses (n + 1, aberto + 1, fechado);
	}

	if (aberto > fechado)	{
		str[n] = ')';
		printa_parenteses (n + 1, aberto, fechado + 1);
	}
}

int main () {
	scanf ("%d", &N);

	printa_parenteses (0, 0, 0);

	return 0;
}
