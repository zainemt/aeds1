#include<stdio.h>

int somaImpares(int N) {
    int soma = 0;

    for (int i = 0 ; i <= N ; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    return soma;
}

int main() {

    int n, total;

    printf("Insira o número do limite: ");
    scanf("%d", &n);

    total = somaImpares(n);

    printf("A soma dos ímpares é %d", total);

}