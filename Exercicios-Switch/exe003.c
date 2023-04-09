#include <stdio.h>
int main(){
    char operacao, repeate;
    int raio;
    float areaCirculo, altura, base, areaRetangulo, areaQuadrado,lado;
    

    printf("C - area de um circulo\n");
    printf("R - area de um retangulo\n");
    printf("Q - area de um quadrado\n");
    printf("");
    do{
    printf("Qual calculo deseja realizar?");
    fflush(stdin);
    scanf("%c", &operacao);

    switch (operacao)
    {
    case 'C':
        printf("Digite o raio do circulo :\n");
        scanf("%i", &raio);
        areaCirculo = 3.14 * (raio * raio);
        printf("A area do Circulo sera %.2f", areaCirculo);
        break;
    case 'R':
        printf("De os valores da base e da altura :\n");
        scanf("%f %f", &base, &altura);
        areaRetangulo = base * altura;
        printf("A area do retangulo serah %.2f",areaRetangulo);
        break;
    case 'Q':
        printf("De o valor do lado do quadrado :\n");
        scanf("%f", &lado);
        areaQuadrado = lado * lado;
        printf("A area do quadrado serah %.2f", areaQuadrado);
        break;
    }
    printf("Deseja calcular outra area? 's' sim 'n' nao\n");
    fflush(stdin);
    scanf("%c", &repeate);
    } while (repeate == 's' || repeate == 'S');

}