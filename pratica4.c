#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define maior(x,y) x>y?x:y;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a = 32;
	int b = 28;
	int c = maior(a, b);

	printf("Maior valor = %d\n\n", c);

	system("pause");
	return 0;
}