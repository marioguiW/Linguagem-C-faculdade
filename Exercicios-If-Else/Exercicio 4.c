#include <stdio.h>
int main(){
    float peso;
    int idade;
    printf("Digite o seu peso :\n");
    scanf("%f", &peso);

    printf("Digite a sua idade : \n");
    scanf("%i", &idade);    

    if(idade >= 18 && peso > 49 && idade <= 67){
        printf("Voce pode doar sangue!");
    }else{
        printf("Sinto muito! voce não pode doar sangue ");
    }
    }


