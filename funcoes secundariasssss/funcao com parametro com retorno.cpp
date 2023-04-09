#include<stdio.h>
#include<stdlib.h>
//exemplo de função COM parametro e COM retorno
float total(int x, int y);

int main(){//função principal
	int x,y, soma;//locais
	printf("Informe o valor de x:");
	scanf("%i", &x);
	printf("Informe o valor de y:");
	scanf("%i", &y);
	soma = total(x,y);//chamada de função
	printf("A soma de x e y eh %i\n", soma);
	system("pause");
}
float total(int x, int y){//função secundária
	float soma;	// local
	soma = x + y;
	return soma;
}
