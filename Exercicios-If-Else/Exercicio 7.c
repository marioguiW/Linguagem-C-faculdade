#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char sexo;
    int idade = 0;

    printf("Qual o seu sexo? f para feminino e m para masculino\n");
    scanf("%c", &sexo);

    printf("%c", &sexo);

    printf("Quantos anos voce tem ? \n");
    scanf("%i", &idade);

    if (idade < 25 && sexo == "f"){
        printf("Parabéns! voce conseguiu a vaga!");
    }else{
        printf("Infelizmente voce nao conseguiu a vaga");
    }
}
