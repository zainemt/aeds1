#include<stdio.h>
#include<stdlib.h>
#define LIMITE 1001

double fibonacci(double* sequencia, int n) {
    return sequencia[n];
}

double* gerarFibonacci() {
    double* sequencia = (double*) malloc(LIMITE * sizeof(double));
    sequencia[0] = 1;
    sequencia[1] = 1;
    for(int i = 2; i < LIMITE - 2; i++) {
        sequencia[i] = (sequencia[i - 1] + sequencia[i - 2]);
    }
    return sequencia;
}

int main() {

    double* sequencia = gerarFibonacci();

    int n = 0;

    while(n >= 0 && n < LIMITE) {
        printf("Insira o valor da posição de fibonacci (0 a 1000): ");
        scanf("%d", &n);

        if (n >= 0 && n < LIMITE) {
            printf("O termo correspondente a posição [%d] é %.5g\n", n, fibonacci(sequencia, n));
        }
    }

    free(sequencia);
}