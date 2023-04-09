#include <stdio.h>
int main() {
    int idade = 0;
    printf("Digite a sua idade : ");
    scanf("%i", &idade);
    if(idade >= 18 && idade <= 70){
        printf("voto OBRIGATORIO");
    }else if(idade > 15 && idade < 18){
        printf("voto FACULTATIVO");
    }else if(idade > 70){
        printf("voto FACULTATIVO");   
    }else{
        printf("PROIBIDO votar");
    }

        


}