#include<stdio.h>
#include<string.h> //funções strings
#include<locale.h> //localização para os caracteres especiais do idioma
#include<stdlib.h> //funções do sistema

//função cabeçalho
void cab() {
	printf("CENTRO UNIVERSITÁRIO INTERNACIONAL UNINTER\n");
	printf("LINGUAGEM DE PROGRAMAÇÃO - 377302\n");
	printf("FRANCISCO GLERISTON DA SILVA OLIVEIRA - 1782244\n");
};

int main() {
	setlocale(LC_ALL, "Portuguese");

	cab();

	int tempo;
	int t1;
	int t2;
	int nt;
	float calc;
	float rhoras;
	float total;

	printf("\nDigite o tempo em minutos: ");
	scanf_s("%d", &tempo); //tempo utilizado
	
	//Cálculo para os valores de acordo com o tempo utilizado e a regra do negócio.
	if (tempo <= 3) {
		calc = 3;
		printf("Valor da conta é = R$ %.2f\n", calc);
	}

	else if (tempo > 3) {
		nt = tempo;
		printf("%d\n",nt);
		t1 = nt / 5;
		printf("%d\n",t1);
		t2 = nt % 5;
		printf("%d\n",t2);
		calc = t1 * 1.50;
		printf("%f\n", calc);
		rhoras = t2 * 0.25;
		printf("%f\n", rhoras);
		total = 2 + calc + rhoras;
		printf("Valor da conta é = R$ %.2f\n", total);
	}
	system("pause");
	return 0;
}
