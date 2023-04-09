#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ano,aureo,seculo,correcaoX,correcaoZ,espacta,luaCheia,domingo;
    char controle = 's';


    printf("CALCULADORA DE DATA DA PASCOA!\n");

    while (controle != 'n'){

        printf("Digite um ano para saber a data da pascoa : \n");
        scanf("%i", &ano);

        aureo = (ano % 19) + 1;

        seculo = (ano / 100) + 1;

        correcaoX = ((seculo * 3) / 4) - 12;

        correcaoZ = ((seculo * 8 + 5) / 25) - 5;

        espacta = (11 * aureo + 20 + correcaoZ - correcaoX) % 30;
          if(espacta == 25 && aureo > 11 || espacta == 24){
             espacta = espacta + 1;
            }

        luaCheia = 44 - espacta;
           if(luaCheia < 21){
               luaCheia = luaCheia + 30;
          }

        domingo = ((ano * 5) / 4) - (correcaoX + 10);

        luaCheia = (luaCheia + 7) - ((domingo + luaCheia) % 7) ;

        if(luaCheia > 31){

            luaCheia = luaCheia - 31;
        
            printf("A pascoa serah %i de abril\n", luaCheia);

        }else{
        
            printf("A pascoa serah %i de março\n", luaCheia);
        }

        printf(" \n");

    }
    return 0;
}
