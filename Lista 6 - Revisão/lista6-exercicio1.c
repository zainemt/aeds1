#include<stdio.h>
#include<stdlib.h>
#define TAMANHO_VETOR 100

float arranjo(float* u, float* v, int n) {
    float produto = 0;
    for (int i = 0 ; i < n ; i++) {
        produto += (u[i] * v[i]);
    }
    return produto;
}

int main() {

    float* u = (float*) malloc(TAMANHO_VETOR * sizeof(float));
    float* v = (float*) malloc(TAMANHO_VETOR * sizeof(float));

    int n;

    do {
        printf("Insira a dimensão o novo arranjo (deve ser menor que %d): ", TAMANHO_VETOR);
        scanf("%d", &n);
    } while (n >= TAMANHO_VETOR);

    for (int i = 0 ; i < n ; i++) {
        u[i] = 3.0;
        v[i] = 2.0;
    }

    float produto = arranjo(u, v, n);
    printf("O produto escalar é: %.2f\n", produto);

    free(u);
    free(v);
}