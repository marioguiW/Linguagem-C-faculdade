#include<stdio.h>
#include<stdlib.h>
//exemplo de função SEM parametro e SEM retorno
//procedimento
int total(){//função secundária
	int x, y, soma;	//locais	
	printf("Informe o valor de x:");
	scanf("%i", &x);
	printf("Informe o valor de y:");
	scanf("%i", &y);
	soma = x + y;
	printf("A soma de x e y eh %i\n", soma);
}
int main(){//função principal
	printf("Função principal - 1 \n");
	total();//chamada de função
	printf("Função principal - 2 \n");
	system("pause");
}
