#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheValores(int x[], int y[], int tamanho) {
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        x[i] = rand() % 11 + 10;
        y[i] = rand() % 11 + 10;
    }
}

void intercala(int x[], int y[], int tamanho, int z[]) {
    for (int i = 0; i < tamanho; i++) {
        z[i * 2] = x[i];    
        z[i * 2 + 1] = y[i];
    }
}

void printarVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int x[10], y[10], z[10 * 2];

    preencheValores(x, y, 10);

    printf("Vetor X: ");
    printarVetor(x, 10);

    printf("Vetor Y: ");
    printarVetor(y, 10);

    intercala(x, y, 10, z);

    printf("Vetor Z (intercalado): ");
    printarVetor(z, 10 * 2);

    return 0;
}