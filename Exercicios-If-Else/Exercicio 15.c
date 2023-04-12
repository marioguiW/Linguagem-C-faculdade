#include <stdio.h>
int main(int argc, char const *argv[])
{
    int telefone, local, mora, divida, trabalho, total;

    printf("CULPADO OU INOCENTE!!!\n");
    printf("POR FAVOR INFORME 1 PARA SIM, E 0 PARA NAO!\n");

    printf("Telefonou para a vitima? ");
    scanf("%d", &telefone);

    printf("Esteve no local do crime? ");
    scanf("%d", &local);

    printf("Mora perto da vitima? ");
    scanf("%d", &mora);

    printf("Devia para a vitima? ");
    scanf("%d", &divida);

    printf("Ja trabalhou com a vitima? ");
    scanf("%d", &trabalho);

    total = telefone + local + mora + divida + trabalho;

    if(total == 2){
        printf("Suspeito!");
    }else if(total > 2 && total < 5){
        printf("Cumplice!");
    }else if(total == 5){
        printf("Voce eh o assasino!");
    }else{
        printf("Voce não eh porra nenhuma");
    }
    
    return 0;
}
