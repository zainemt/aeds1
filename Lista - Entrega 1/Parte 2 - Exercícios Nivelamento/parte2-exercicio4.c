#include<stdio.h>

int main() {

    int n;

    printf("Insira um número inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O número %d é par", n);
    } else {
        printf("O número %d é ímpar", n);
    }

    return 0;

}