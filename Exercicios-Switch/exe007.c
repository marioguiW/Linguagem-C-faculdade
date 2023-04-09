#include<stdio.h>
int main(){
    float total,peso;
    char repeat;
    int planet;

    do{
    printf("Digite o seu peso :\n");
    fflush(stdin);
    scanf("%f", &peso);

    printf("Escolha um Planeta para calcular qual serah o seu peso nele!\n");
    printf("1 - Mercurio\n");
    printf("2 - Venus\n");
    printf("3 - Marte\n");
    printf("4 - Jupiter\n");
    printf("5 - Saturno\n");
    printf("6 - Urano\n");
    scanf("%i", &planet);

    switch (planet)
    {
    case 1:
        total = peso * 0.37;
        printf("O seu peso em Mercurio seria deh %.2fkg", total);
        break;
    case 2:
        total = peso * 0.88;
        printf("O seu peso em Venus seria deh %.2fkg", total);
        break;
    case 3:
        total = peso * 0.38;
        printf("O seu peso em Marte seria deh %.2fkg", total);
        break;
    case 4:
        total = peso * 2.64;
        printf("O seu peso em Jupiter seria deh %.2fkg", total);
        break;
    case 5:
        total = peso * 1.15;
        printf("O seu peso em Saturno seria deh %.2fkg", total);
        break;
    case 6:
        total = peso * 1.17;
        printf("O seu peso em Urano seria deh %.2fkg", total);
        break;
    default:
        printf("Escolha o planeta corretamente!\n");
        break;
    }
    printf("\n");
    printf("Deseja escolher outro peso ou outro planeta? 's' sim 'n' nao\n");
    fflush(stdin);
    scanf("%s", repeat);
}while(repeat == 's');


}