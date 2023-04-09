#include <stdio.h>
int main(){

    int total;
    int numero1;
    int numero2;
    char operacao;
    char deseja;

    do{
    printf("Digite qual operacao voce vai realizar:\n");
    printf("'+' para somar\n");
    printf("'-' para subtrair\n");
    printf("'*' para multiplicar\n");
    printf("'/' para dividir\n");
    fflush(stdin);
    scanf("%c", &operacao);
    
    printf("Digite o primeiro valor: \n");
    scanf("%i", &numero1);

    printf("Digite o segundo valor:");
    scanf("%i", &numero2);

    

    switch (operacao){
    case '+':
    total = numero1 + numero2;
        break;
    case '-':
    total = numero1 - numero2;
        break;
    case '*':
    total = numero1 * numero2;
        break;
    case '/':
    total = numero1 / numero2;

        break;
    default:
        printf("Digite a operacao corretamente!");
        break;
    }
    printf("%i\n", total);

    printf("Deseja informar um novo time? 's' para sim 'n' para nao\n");
    fflush(stdin);
    scanf("%c", &deseja);

    }while(deseja == 's' || deseja == 'S');

    printf("Fim da calculadora");
}