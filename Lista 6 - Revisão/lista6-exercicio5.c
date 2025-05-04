#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int* gerarVetor(int n) {
    int* vetor = (int*) malloc(n * sizeof(int));
    srand(time(NULL));

    for(int i = 0 ; i < n ; i++) {
        vetor[i] = ((rand() % 100) + 1);
    }

    return vetor;
}

int* inverter(int* vetor, int n) {
    int* invertido = (int*) malloc(n * sizeof(int));

    int aux = n;
    for(int i = 0 ; i < n ; i++) {
        invertido[i] = vetor[aux - 1];
        aux--;
    }

    return invertido;
}

int main() {
    int n;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);

    int* X = gerarVetor(n);
    int* Y = inverter(X, n);
    
    for (int i = 0 ; i < n ; i++) {
        printf("%d ", Y[i]);
    }
    printf("\n");
    for (int i = 0 ; i < n ; i++) {
        printf("%d ", X[i]);
    }

    free(X);
    free(Y);
}