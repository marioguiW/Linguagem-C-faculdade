// Criar 2 vetores de 5 posições cada, e colocar a soma destas posições em um
// terceiro vetor.


#include <stdio.h>

int main(){

int lista1 [5];
int lista2 [5];
int lista3 [5];

for (int i = 0; i < 5; i++)
{
    printf("Digite valor para o a lista1 : ");
    scanf("%d", &lista1[i]);
}


for (int i = 0; i < 5; i++)
{
    printf("Digite valor para o a lista2 : ");
    scanf("%d", &lista2[i]);
}

lista3 [0] = lista1[0] + lista2[0];
lista3 [1] = lista1[1] + lista2[1];
lista3 [2] = lista1[2] + lista2[2];
lista3 [3] = lista1[3] + lista2[3];
lista3 [4] = lista1[4] + lista2[4];

    printf("LISTA 1 !!\n");
for (int i = 0; i < 5; i++)
{
    printf("%d ", lista1[i]);
}
    printf("\n");
    printf("LISTA 2 !!\n");
for (int i = 0; i < 5; i++)
{
    printf("%d ", lista2[i]);
}
    printf("\n");
    printf("LISTA 3 !!\n");
for (int i = 0; i < 5; i++)
{
    printf("%d ", lista3[i]);
}




}