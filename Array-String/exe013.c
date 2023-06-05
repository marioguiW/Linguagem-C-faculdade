// 3. Leia duas strings. Se as strings forem iguais escreva “strings iguais”. Caso contrário,
// concatene as duas strings e imprima a string resultante.

#include <stdio.h>
#include <string.h>

int main(){

    char frase1[30];
    char frase2[30];

    printf("Digite uma frase : \n");
    gets(frase1);

    printf("Digite outra frase : \n");
    gets(frase2);

    int compara = strcmp(frase1, frase2);

    if (compara == 0)
    {
        printf("As strings sao iguais!!\n");
    }else if(compara = -1){
        printf("%s %s",frase1, frase2);
    }
    


}