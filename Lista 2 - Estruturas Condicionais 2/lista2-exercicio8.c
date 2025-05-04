#include<stdio.h>

int main() {

    int c, d, u, n;

    printf("Insira um número de 3 digitos: ");
    scanf("%d", &n);

    c = n / 100;
    n %= 100;

    d = n / 10;
    n %= 10;

    u = n;

    if (u == c) {
        printf("É um palíndromo.");
    } else {
        printf("Não é um palíndromo.");
    }
}