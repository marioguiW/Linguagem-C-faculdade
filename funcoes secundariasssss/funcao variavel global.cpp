#include<stdio.h>
#include<stdlib.h>
//exemplo variável global
int x, y, soma;//globais

int total(){//função secundária
    int x;
	soma = x + y;
}
int main(){//função principal
	printf("Informe o valor de x:");
	scanf("%i", &x);
	printf("Informe o valor de y:");
	scanf("%i", &y);
	total();//chamada de função
	printf("A soma de x e y eh %i\n", soma);
	system("pause");
}
