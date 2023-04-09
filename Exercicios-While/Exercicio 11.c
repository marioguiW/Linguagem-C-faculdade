#include <stdio.h>
int main()
{
    int numero, asterisco, cont;
    printf("Informe um valor para o tamanho do triangulo : ");
    scanf("%i", &numero);

    while(numero>= 1){
        asterisco = 1;
       
        while(asterisco<=numero) {
            printf("*");
            cont = cont + 1;
            asterisco=asterisco+1;
            
    
        }

        numero = numero - 1;
        printf("\n");
    }

    printf("%i", cont);
    return 0;
}
