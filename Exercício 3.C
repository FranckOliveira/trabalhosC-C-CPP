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

/*F = 1000110
r = 1110010
a = 1100001
n = 1101110
c = 1100011
i = 1101001
s = 1110011
c = 1100011
o = 1101111*/

unsigned int calculaParidade (unsigned char b) {
    int odd = 0;
    while (b) {
        odd ^= b & 1;
        b >>= 1;
    }
    return odd;
}
   
int main(void) {
    setlocale(LC_ALL, "Portuguese");
    cab();
    int F = 1000110;
    int r = 1110010;
    int a = 1100001;
    int n = 1101110;
    int c = 1100011;
    int i = 1101001;
    int s = 1110011;
    int o = 1101111;
    printf("\n\n");
    printf("%d F => %d\r\n", F, calculaParidade(F));
    printf("%d r => %d\r\n", r, calculaParidade(r));
    printf("%d a => %d\r\n", a, calculaParidade(a));
    printf("%d n => %d\r\n", n, calculaParidade(n));
    printf("%d c => %d\r\n", c, calculaParidade(c));
    printf("%d i => %d\r\n", i, calculaParidade(i));
    printf("%d s => %d\r\n", s, calculaParidade(s));
	printf("%d c => %d\r\n", c, calculaParidade(c));
    printf("%d o => %d\r\n", o, calculaParidade(o));
    return 0;
    system("pause");
}
