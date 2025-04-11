/*
Faça um programa que leia 10 números, armazene em um vetor.
Calcular e exibir qual o maior número armazenado.
*/
#include<stdio.h>

int main() {

    int vetor[10], maior = 0;

    for (int i = 0 ; i < 10 ; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    
    printf("O maior valor é %d", maior);

}