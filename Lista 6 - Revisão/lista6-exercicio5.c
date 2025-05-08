#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int* alocarVetor(int n) {
    return (int*) malloc(n * sizeof(int));
}

int* gerarVetor(int n) {
    int* vetor = alocarVetor(n);
    srand(time(NULL));

    for(int i = 0 ; i < n ; i++) {
        vetor[i] = ((rand() % 100) + 1);
    }

    return vetor;
}

int* inverterVetor(int* vetor, int n) {
    int* vetorInvertido = alocarVetor(n);

    int aux = n;
    for(int i = 0 ; i < n ; i++) {
        vetorInvertido[i] = vetor[aux - 1];
        aux--;
    }

    return vetorInvertido;
} 

int main() {
    int n;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);

    int* X = gerarVetor(n);
    int* Y = inverterVetor(X, n);
    
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