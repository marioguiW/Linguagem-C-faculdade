#include <stdio.h>
int main(int argc, char const *argv[])
{
    int dia,mes,ano;
    printf("Digite o dia do seu aniversario :");
    scanf("%i",&dia);

    printf("Digite o mes do seu aniversário(em numeros) : ");
    scanf("%i",&mes);

    printf("Digite o ano do seu aniversário :");
    scanf("%i",&ano);

    if(dia < 0 && dia > 31 || mes > 12 || mes == 0 || ano > 2018 || ano == 2018){
        printf("Esta data eh invalida pois o dia e o mes estao errados!");
    }else if(dia < 0 && dia > 31 || mes > 12 || mes == 0){
        printf("Esta data eh invalida pois o dia, mes e ano estao errados!");
    }else if(dia < 0 && dia > 31){
        printf("Esta data eh invalida pois o dia esta errado!");
    }else if(mes > 12 || mes == 0){
        printf("Esta data eh invalida pois o mes esta errado!");
    }else if(ano > 2018 || ano == 2018){
        printf("Esta data eh invalida pois o ano esta errado!");
    }else{
        printf("Esta data eh valida, ansioso para o seu aniversario!");
    }
    return 0;
}
