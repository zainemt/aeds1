#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double calcularMedia(double* vetor, int n) {
    double media = 0;
    for (int i = 0 ; i < n ; i++) {
        media += vetor[i];
    }
    media /= n;
    return media;
}

double* gerarAleatorios(int n) {
    double* vetor = (double*) malloc(n * sizeof(double));

    srand(time(NULL));
    
    for(int i = 0 ; i < n ; i++) {
        vetor[i] = ((rand() % 5) + 1);
    }

    return vetor;
}

int main() {

    int n;

    printf("Insira o número de elementos: ");
    scanf("%d", &n);

    double* vetor = gerarAleatorios(n);

    double media = calcularMedia(vetor, n);

    for (int i = 0 ; i < n ; i++) {
        printf("%.2f \n", vetor[i]);
    }

    printf("A média dos valores é %.2f", media);

    free(vetor);
}