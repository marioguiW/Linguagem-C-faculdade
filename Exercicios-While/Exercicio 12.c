#include <stdio.h>
int main(){
    int contador = 1;
    int vezes = 0;
    float soma;

    while(vezes != 5){
        if (contador % 3 == 0){
            printf("%i ", contador);
            vezes++;
        }
        contador++;
    }
}