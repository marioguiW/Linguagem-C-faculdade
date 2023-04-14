// Fazer um programa que pergunta um valor em metros, e passe essa informação por
// parâmetro a uma função secundária e imprime o correspondente em decímetros,
// centímetros e milímetros

#include <stdio.h>

float regua(float metros){
    float dm,cm,mm;

    dm = metros * 10;
    cm = metros * 100;
    mm = metros * 1000;

    printf("%.1f em decimetros : %.1f\n", metros, dm);
    printf("%.1f em centimetros : %.1f\n", metros, cm);
    printf("%.1f em milimetros : %.1f\n", metros, mm);
}

int main(){

    float metros;
    printf("Digite um valor em metros :\n");
    scanf("%f", &metros);

    regua(metros);

}