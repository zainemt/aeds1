/*
Faça um programa que leia 20 números, armazene em um vetor
Calcular e exibir:
a) A quantidade de números múltiplos de 2;
b) A quantidade de números múltiplos de 3;
c) A quantidade de números NÃO múltiplos de 2 ou 5.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    int vetor[20], multi2 = 0, multi3 = 0, nmulti2e5 = 0;
    srand(time(NULL));

    for (int i = 0 ; i < 20 ; i++) {
        vetor[i] = ((rand() % 100) + 1);
        if (vetor[i] % 2 == 0) {
            multi2++;
        }
        if (vetor[i] % 3 == 0) {
            multi3++;
        }
        if (vetor[i] % 2 != 0 || vetor[i] % 5 != 0) {
            nmulti2e5++;
        }
    }

    printf("Múltiplos de 2: %d \n", multi2);
    printf("Múltiplos de 3: %d \n", multi3);
    printf("Não múltiplos de 2 ou 5: %d ", nmulti2e5);
}