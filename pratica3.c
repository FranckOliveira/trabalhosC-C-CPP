#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int imprimeN(int inicio, int sfim);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int comeco, sfim, i;

	comeco = 1;
	sfim = 21;

	printf("FUNÇÃO RECURSIVA\n");
	imprimeN(comeco, sfim); //chamada da função recursiva

	printf("\n\n");

	printf("FUNÇÃO ITERATIVA FOR\n");
	for (i = comeco; i < sfim; i++) { //impressão com for
		printf("%d ", i); //imprime os números
	}
	printf("\n\n");

	printf("FUNÇÃO ITERATIVA WHILE\n");
	while (comeco < sfim)
	{
		printf("%d ", comeco); //imprime os números
		comeco++;
	}
	printf("\n\n");
	system("pause");
	return 0;
}
int imprimeN(int comeco, int sfim) { //FUNÇÃO RECURSIVA
	if (comeco < sfim) {
		printf("%d ", comeco);		//IMPRIME OS NÚMEROS
		imprimeN(comeco + 1, sfim); //CHAMADA RECURSIVA
	}
}