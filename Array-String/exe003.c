// 3. Solicite ao usuário que informe seu numero de celular, sendo DDD+numero (sem digito
// e sem espaço). Informe a qual região o código pertence.
// a. Considere:
// i. 45 – Cascavel;
// ii. 41 – Curitiba;
// iii. 21 – Rio de Janeiro;
// iv. 51 – Porto Alegre;
// v. 67 – Mato Grosso do Sul;
// vi. 63 – Tocantins

#include <stdio.h>
#include <stdlib.h>

int main(){

    char numero[11];
    int ddd;

    printf("Digite o seu numero de celular (sem espaco) : \n");
    gets(numero);
    fflush(stdin);

    if (numero[0] == '4' && numero[1] == '5')
    {
        printf("O seu ddd eh de cascavel!\n");
    }else if(numero[0] == '4' && numero[1] == '1'){
        printf("O seu ddd eh de curitiba!");
    }else if(numero[0] == '2' && numero[1] == '1'){
        printf("O seu ddd eh do rio de janeiro!");
    }else if(numero[0] == '5' && numero[1] == '1'){
        printf("O seu ddd eh de porto alegre!");
    }else if(numero[0] == '6' && numero[1] == '7'){
    printf("O seu ddd eh do mato grosso do sul!");
    }else if(numero[0] == '6' && numero[1] == '3'){
    printf("O seu ddd eh de tocantins !");
    }
}