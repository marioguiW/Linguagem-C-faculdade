#include<stdio.h>
#include<stdlib.h>
//exemplo vari�vel global
int x, y, soma;//globais

int total(){//fun��o secund�ria
    int x;
	soma = x + y;
}
int main(){//fun��o principal
	printf("Informe o valor de x:");
	scanf("%i", &x);
	printf("Informe o valor de y:");
	scanf("%i", &y);
	total();//chamada de fun��o
	printf("A soma de x e y eh %i\n", soma);
	system("pause");
}
