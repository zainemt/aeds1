#include<stdio.h>

int Menor(int vetor[], int tamanho) {
    
    if (tamanho == 1) {
        return vetor[0];
    }

    int menorNumero = Menor(vetor, (tamanho - 1));

    if (vetor[tamanho - 1] < menorNumero) {
        return vetor[tamanho - 1];
    }

    return menorNumero;
}

int main() {

    int vetor[] = {5, 3, 1, 6, 7};

    int menorNumero = Menor(vetor, (sizeof(vetor)/vetor[0]));
    printf("%d \n", menorNumero);

}