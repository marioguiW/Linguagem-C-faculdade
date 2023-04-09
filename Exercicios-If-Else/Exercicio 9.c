#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota1, nota2;
    printf("Digite os valores da primeira e segunda nota : \n");
    scanf("%f %f", &nota1 , &nota2);

    float media = (nota1 + nota2) / 2;
    printf("%.2f\n", media);

    if(media <= 5){
        printf("Reprovado!");
    }else if(media >= 5.1 && media <= 6.9){
        printf("Voce esta de recuperaçao!");
    }else if(media >= 7){
        printf("Aprovado!");
    }

    return 0;
}
