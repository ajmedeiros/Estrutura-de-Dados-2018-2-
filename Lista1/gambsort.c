/* Função de ordenação: Gambiarra_sort */
void gambiarra_sort (void* vetor, int nregistros, int tamregistro, int (*compara) (const void *a, const void *b)) {
	int i, j;
	void *aux = malloc (tamregistro);
	for (i = 0; i < nregistros; i++) {
		for (j = i + 1; j < nregistros; j++) {
			if (compara ((vetor + i*tamregistro), (vetor + j*tamregistro)) > 0) {
				memmove (aux, (vetor + j*tamregistro), tamregistro);
				memmove ((vetor + j*tamregistro), vetor + i*tamregistro, tamregistro);
				memmove ((vetor + i*tamregistro), aux, tamregistro);
			}
		}
	}
}
