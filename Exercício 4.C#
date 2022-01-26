#include<stdio.h>
#include<string.h> //funções strings
#include<locale.h> //localização para os caracteres especiais do idioma
#include<stdlib.h> //funções do sistema
#define max 7 //definindo uma constante
//função cabeçalho
void cab() {
	printf("CENTRO UNIVERSITÁRIO INTERNACIONAL UNINTER\n");
	printf("LINGUAGEM DE PROGRAMAÇÃO - 377302\n");
	printf("FRANCISCO GLERISTON DA SILVA OLIVEIRA - 1782244\n");
};

//função recursiva
int soma(int vet[], int t) {
	if (t == 0)
		return 0;
	else
		return vet[t - 1] + soma(vet, t - 1);
}
int main() {
	setlocale(LC_ALL, "Portuguese");
	cab();
	int vet[max];
	int i;
	for (i = 0; i < max; i++) {

		printf("\nDigito da matricula [%d]: ", i);
		scanf_s("%d", &vet[i]); //preenchendo o vetor com dados
	}

	printf("\nSOMA: %d\n", soma(vet,i)); //chamada recursiva
	return 0;

	system("pause");
}
