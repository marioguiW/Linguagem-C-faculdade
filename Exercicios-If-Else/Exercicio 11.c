#include <stdio.h>

int main(int argc, char const *argv[])
{
    int eleitores, votos, calculo;
    printf("Digite o número de eleitores do municipio : \n ");
    scanf("%d", &eleitores);

    printf("Digite o numero de votos do candidato mais votado : \n");
    scanf("%d", &votos);

    if(votos >= eleitores/2){
        printf("O candidato foi eleito no primeiro turno!");
    }else{
        printf("A eleição terá um segundo turno!");
    }
    return 0;
}

