#include <stdio.h>
int main(int argc, char const *argv[])
{
    char sexo;
    char nome [10];
    float altura = 0;

    printf("Digite seu nome : \n");
    scanf("%s", &nome);

    printf("Digite seu sexo, ('m') para masculino e ('f') para feminino : \n");
    scanf("%s", &sexo);

    printf("Digite a sua altura : ");
    scanf("%f", &altura);

    if(sexo == 'm'){
        float peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal de %s eh %.2f",nome,peso_ideal);
    }else{
        float peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal de %s eh %.2f",nome,peso_ideal);
        
    }

    return 0;
}
