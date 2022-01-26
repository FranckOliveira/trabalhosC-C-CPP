#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define QTE 4
#define SAIR exit(1)

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int* px;
	px = (int*)calloc(QTE, sizeof(int));
	if (px == NULL) {
		printf("ERRO! Não tem memória suficiente.");
		SAIR; //finaliza o programa.
	}

	int i;

	printf("DIGITAR OS DADOS PARA O VETOR DE 4 POSIÇÕES\n\n");
	for (i = 0; i < 4; i++) {
		printf("Digite px[%d]: ", i);
		scanf_s("%d", &px[i]);
	}
	printf("\n");
	printf("\nMOSTRAR OS DADOS DO VETOR\n\n");
	for (i = 0; i < 4; i++) {
		printf("Posições px[%d]= %d\n", i, px[i]);
	}

	printf("\n");
	free(px); //libera memória
	system("pause");
	return 0;
}