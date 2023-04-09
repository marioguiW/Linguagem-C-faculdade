#include <stdio.h>
float soma(float x, float y){ 
    float soma;
    printf("Funcao secundaria");
    soma = x + y;
    return soma;
}
int main(){
    float x, y, total;
    printf("Informe um valor de x\n");
    scanf("%f", &x);
    printf("Informe um valor de y\n");
    scanf("%f", &y);
    total = soma(x,y);
    soma(x,y);  // mandando por parametro o valor de x e o valor de y.
    printf("A soma de x + y eh %f", total);
    printf("Funcao principal\n");
    return 0;

}