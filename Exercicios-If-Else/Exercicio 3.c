#include <stdio.h>
int main() {
    int a, b, c;
    printf("Digite o valor dos tres numeros : ");
    scanf("%i %i %i", &a, &b, &c);

    if(a < b && a < c){
        if(b < c){
            printf("%i %i %i\n", a, b, c);
        }else{
            printf("%i %i %i\n", a, c, b);
        }
    }else if(b < a && b < c){
        if(a < c){
            printf("%i %i %i\n", b, a ,c);
        }else{
            printf("%i %i %i\n", b, c, a);
        }
    }else if(c < b && c < a){
        if(b < a){
            printf("%i %i %i\n", c, b, a);
        }else{
            printf("%i %i %i\n", c, a, b);
        }
    }
    

system("pause");

}