#include <stdlib.h>
#include <stdio.h>

extern void stampa_onde(FILE *f, int n);

int main(void) {

	FILE* f = fopen("prova.txt", "w");
	stampa_onde(f, 2);
	fclose(f);

	return 0;
}