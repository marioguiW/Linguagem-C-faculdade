#include <stdio.h>
int soma(float a, float b){ //função secundária tem que ser declarada antes da main
    float soma;
    printf("Funcao secundaria");
    soma = a + b;
    printf("A soma de a + b eh %f\n", soma);
}
int main(){
    float x,y;
    printf("Informe um valor de x\n");
    scanf("%f", &x);
    printf("Informe um valor de y\n");
    scanf("%f", &y);
    soma(x,y);  // mandando por parametro o valor de x e o valor de y.
    printf("Funcao principal\n");
    return 0;

}