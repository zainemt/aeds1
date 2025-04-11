/*Bônus: Refaça a questão 1 utilizando funções e Ponteiros*/

/*
faça um programa que leia um vetor de 100 posições de 
números e, em seguida, mostre somente os números positivos
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    int *vetor = (int*)malloc(100 * sizeof(int));
    srand(time(NULL));

    for (int i = 0 ; i < 100 ; i++) {
        vetor[i] = ((rand() % 100) + 1);
        if (vetor[i] % 2 == 0) {
            printf("%d \n", vetor[i]);
        }
    }    

}