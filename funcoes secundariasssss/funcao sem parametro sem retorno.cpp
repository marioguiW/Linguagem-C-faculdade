#include<stdio.h>
#include<stdlib.h>
//exemplo de fun��o SEM parametro e SEM retorno
//procedimento
int total(){//fun��o secund�ria
	int x, y, soma;	//locais	
	printf("Informe o valor de x:");
	scanf("%i", &x);
	printf("Informe o valor de y:");
	scanf("%i", &y);
	soma = x + y;
	printf("A soma de x e y eh %i\n", soma);
}
int main(){//fun��o principal
	printf("Fun��o principal - 1 \n");
	total();//chamada de fun��o
	printf("Fun��o principal - 2 \n");
	system("pause");
}
