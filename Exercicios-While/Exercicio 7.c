#include <stdio.h>
int main(){
    int contador = 1;
    float soma;

    while(contador <= 500){
        if (contador % 2 != 0 && contador % 3 == 0){
            printf("%i ", contador);
        }
        contador++;
    }


 
    
}