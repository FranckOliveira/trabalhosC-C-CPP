#include<stdio.h>
#include<conio.h>  //manipular os caracteres
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

	//Variáveis
	char texto[60];
	int ctd;


		cab(); //chama cabeçalho

		printf("Digite seu nome e seu RU separados por vírgula:\n ");
		gets(texto);
			for (ctd = 0; ctd < 60; ctd++) { //laço de incremento

			//substituição das vogais pelos números
				if (texto[ctd] == 'A' || texto[ctd] == 'a')
					texto[ctd] = '2';
				else if (texto[ctd] == 'E' || texto[ctd] == 'e')
					texto[ctd] = '3';
				else if (texto[ctd] == 'I' || texto[ctd] == 'i')
					texto[ctd] = '4';
				else if (texto[ctd] == 'O' || texto[ctd] == 'o')
					texto[ctd] = '5';
				else if (texto[ctd] == 'U' || texto[ctd] == 'u')
					texto[ctd] = '6';

		}

		printf("\nTexto codificado: %c%s%c\n", 34,&texto, 34); // %c%s%c - indicam o tipo de dado que se espera, char, string, char
		system("pause");
		return 0;
	}
	
