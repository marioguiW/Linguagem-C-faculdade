//  Faça um programa que padronize uma senha da seguinte forma:
// a. Conter no mínimo 8 caracteres;
// b. Conter letras;
// c. Conter números;

#include <stdio.h>
#include <string.h>

int main(){



    char senha[20];

    while (correto != 1){

        printf("Sua senha deve :\nConter no minimo 8 caracteres\nConter letras\nConter numeros\n");

        printf("Digite sua senha : \n");
        gets(senha);

        int tamanho = strlen(senha);

        for (int i = 0; i < tamanho; i++)
        {
            
        }
        

        if(tamanho < 8 || ){
            printf("Sua senha deve ter no minimo 8 caracteres!");
        }
    }



}