#include <stdio.h>
int main(){
    char option = 's';
    float salario;
    float tributacao;


    while (option == 's'){
        printf("Qual o seu salário? \n");
        scanf("%f", &salario);
        if (salario <= 1637.11){
            printf("Salario Isento de Imposto!\n");           
        }else if(salario > 1637.11 && salario < 2453.50){
            tributacao = salario - (salario * 0.925);
            printf("O  valor de 7,5 porcento de imposto a ser pago eh deh %.2f\n", tributacao);
        }else if(salario > 2453.51 && salario < 3271.38){
            tributacao = salario - (salario * 0.85);
            printf("O valor de 15 porcento de imposto a ser pago eh deh %.2f\n", tributacao);
        }else if(salario > 3271.39 && salario < 4087.65){
            tributacao = salario - (salario * 0.775);
            printf("O valor de 22,5 porcento de imposto a ser pago eh deh %.2f\n", tributacao);
        }else if(salario > 4087.66){
            tributacao = salario - (salario * 0.725);
            printf("O valor de 27,5 porcento de imposto a ser pago eh deh %.2f\n", tributacao);
        }

        printf("Deseja informar outro valor? 's' sim e 'n' para nao\n");
        fflush(stdin);
        scanf("%c", &option);    
    }
}