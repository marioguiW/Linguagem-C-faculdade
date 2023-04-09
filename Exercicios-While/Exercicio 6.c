#include <stdio.h>

int main()
{
    char sexo;
    float altura = 0;
    float mediaHomem = 0;
    float mediaMulher = 0;
    float alturaHomem = 0;
    float alturaMulher = 0;
    int contadorHomem = 0;
    int contadorMulher = 0;
    int contador = 0;
    
    while (contador < 10){
        printf("Digite a altura e o sexo de uma pessoa, 'm' para masculino e 'f' para feminino:\n");
        scanf("%f %s", &altura, &sexo);

        if(sexo == 'm'){
            alturaHomem = alturaHomem + altura;
            contadorHomem++;
        }else if(sexo == 'f'){
            alturaMulher = alturaMulher + altura;
            contadorMulher++;
        }
        contador++;
    }
    mediaMulher = alturaMulher / contadorMulher;
    mediaHomem = alturaHomem / contadorHomem;

    printf("A altura media das mulheres eh : %f",mediaMulher);
    printf("A altura media dos homens eh %f",mediaHomem);

       
    return 0;
}
