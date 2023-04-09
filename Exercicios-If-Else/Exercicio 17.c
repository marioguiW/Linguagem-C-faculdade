#include <stdio.h>
int main(int argc, char const *argv[])
{
    int horas, horas_extra;
    float salario_hora, total;

    printf("Digite a quantidade de horas mensais trabalhadas : \n");
    scanf("%i", &horas);
    
    printf("Digite o valor pago por hora trabalhada : \n");
    scanf("%f", &salario_hora);

    if(horas > 160){
        horas_extra = horas - 160;
        total = (160 * salario_hora) + ((horas_extra * salario_hora) * 1.5);
        printf("O salario eh de %.2f", total);
    }else{
        total = horas * salario_hora;
        printf("O salario serah de %.2f", total);
    }
    return 0;
}
