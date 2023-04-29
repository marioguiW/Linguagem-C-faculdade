// Faça um programa que possua um vetor denominado A que armazene 6 números
// inteiros. O programa deve executar os seguintes passos:
// a. Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
// b. Armazene em uma variável inteira (simples) a soma entre os valores das
// posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
// c. Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
// d. Mostre na tela cada valor do vetor A, um em cada linha.

#include <stdio.h>

int main(){

int A[6] = {1, 0, 5, -2, -5, 7};
int soma = A[0] + A[1] + A[5];

printf("A soma entre o valor 1,2 e 5 eh : %i\n",soma);

A[4] = 100;

printf("Valor 1: %i\nValor 2: %i\nValor 3: %i\nValor 4: %i\nValor 5: %i\nValor 6: %i", A[0],A[1],A[2],A[3],A[4],A[5]);

}