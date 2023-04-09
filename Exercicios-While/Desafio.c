#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numeroInicialBolas= 0;
    int contagemArmazem= 0;
    int numeroBolas = 0;
    int armazemBolas = 0;
    int armazemBolasBase= 0;
    printf("Digite o valor de uma aresta da base de um tetraedo : ");
    scanf("%d", &numeroBolas);

    numeroInicialBolas = numeroBolas;
   
    while(numeroInicialBolas > 0){

        while(numeroBolas > 0){
            armazemBolasBase = armazemBolasBase + numeroBolas;
            numeroBolas = numeroBolas - 1;
            contagemArmazem = armazemBolasBase; 
        }

        armazemBolas = armazemBolas + contagemArmazem + (armazemBolasBase - numeroInicialBolas);
        contagemArmazem = 0;
        armazemBolasBase = armazemBolasBase - numeroInicialBolas;
        numeroInicialBolas = numeroInicialBolas - 1;
    }
    printf("O total de Bolas utilizadas foi de %d bolas!",armazemBolas);
    return 0;
}
