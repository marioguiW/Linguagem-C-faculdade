#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a,b,c,hipotenusa;
    printf("Digite o valor de a : \n");
    scanf("%f", &a);
    printf("Digite o valor de b : \n");
    scanf("%f", &b);
    

    hipotenusa = sqrt((pow(a,2) + pow(b,2)));
    printf("a hipotenusa eh %.2f\n", hipotenusa);

    if(hipotenusa > 100){
        printf("hipotenusa excede o tamanho permitido para area");
    }else{
        printf("hipotenusa aceita");
    }
    
    return 0;
}
