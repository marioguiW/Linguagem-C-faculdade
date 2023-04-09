#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int npc, jogada;

    srand(time(NULL));
    npc = 1 + rand() %3;

    printf("Digite 1 para jogar Pedra\n");
    printf("Digite 2 para jogar Papel\n");    
    printf("Digite 3 para jogar Tesoura\n");
    scanf("%d", &jogada);

    if(jogada > 3 && jogada < 1){
        printf("Leia as regras direito");
    }else{
        if(jogada == npc){
            printf("Empate!");
        }else if(jogada == 1 && npc == 3){
            printf("Parabens! voce ganhou");
        }else if(jogada == 1 && npc == 2){
            
        }
        
        
    }


}