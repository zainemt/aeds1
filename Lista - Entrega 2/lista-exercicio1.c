#include<stdio.h>
#include<stdlib.h>

int main() {

    int vetor[5];

    for (int i = 0; i < 5 ; i++) {
        printf("Insira um número inteiro em [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    int vetor2[5];

    for (int i = 0; i < 5 ; i++) {
        vetor2[i] = vetor[i] * 2;
    }

    for (int i = 0; i < 5 ; i++) {
        printf("%d ", vetor2[i]);
    }
}