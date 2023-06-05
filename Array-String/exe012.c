// Faça um programa que solicite ao usuário a criação de um usuário e senha, pedindo para
// que ele digite novamente a senha para comparar, em seguida retorne se foi validado ou
// não

#include <stdio.h>
#include <String.h>

int main(){

    char usuario[20];
    char senha[20];
    char senhaNovamente[20];
    int correta = 0;

    printf("Digite o nome de seu usuario : \n");
    gets(usuario);

    while(correta != -1){

    printf("Digite a sua senha : \n");
    gets(senha);

    printf("Digite a sua senha novamente : \n");
    gets(senhaNovamente);

    correta = strcmp(senha, senhaNovamente);


    if (correta == 0)
    {
        printf("Seu usuario foi cadastrado no sistema! Bem vindo!\n");

    }else{
        
        printf("As senhas nao coincidem! Digite novamente! \n");
    }
    

    }
    

}