#include <stdio.h>
int main() {
    int numero;
    printf("Digite o valor para o numero : ");
    scanf("%i",&numero);

    if(numero > 0){
        int sim = numero * 3;
        printf("o valor do numero positivo eh : %i", sim);

    }else{
        int nao = numero * numero;
        printf("o valor do numero negativo eh : %i", nao);


    }
}