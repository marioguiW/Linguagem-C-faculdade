#include <stdio.h>

void soma(){ //função secundária tem que ser declarada antes da main
    float x, y, soma;
    printf("Funcao secundaria");
    printf("Informe um valor de x\n");
    scanf("%f", &x);
    printf("Informe um valor de y\n");
    scanf("%f", &y);
    soma = x + y;
    printf("A soma de x + y eh %f\n", soma);
}
int main(){
    printf("Função principal\n");
    soma();
    printf("Funcao secundaria\n");
    return 0;

}