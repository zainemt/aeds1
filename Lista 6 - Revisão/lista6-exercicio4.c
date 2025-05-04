#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAXIMO_ELEMENTOS 10

int* gerarVetor() {
    int* vetor = (int*) malloc(MAXIMO_ELEMENTOS * sizeof(int));

    //opção para inserir os valores manualmente
    /*
    for (int i = 0 ; i < MAXIMO_ELEMENTOS ; i++) {
        printf("Insira um valor para a posição [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    */

    for (int i = 0 ; i < MAXIMO_ELEMENTOS ; i++) {
        vetor[i] = (i + 1);
    }

    return vetor;
}

int* intercalarVetores(int* vetor1, int* vetor2) {
    int* vetor3 = (int*) malloc((MAXIMO_ELEMENTOS * 2) * sizeof(int));
    int aux1 = 0, aux2 = 0;
    for (int i = 0 ; i < (MAXIMO_ELEMENTOS * 2) ; i++) {
        if ((i + 1) % 2 == 0) {
            vetor3[i] = vetor1[aux1];
            aux1++;
        } else {
            vetor3[i] = vetor2[aux2];
            aux2++;
        }
    }
    return vetor3;
}

int main() {

    int* X = gerarVetor();
    int* Y = gerarVetor();
    int* Z = intercalarVetores(X, Y);

    for (int i = 0 ; i < MAXIMO_ELEMENTOS * 2 ; i++) {
        printf("%d ", Z[i]);
    }

    free(X);
    free(Y);
    free(Z);

}