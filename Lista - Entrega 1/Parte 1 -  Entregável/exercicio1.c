#include<stdio.h>

int main() {

    int n, resultado = 0;

    printf("Insira um número inteiro: ");
    scanf("%d", &n);

    for (int i = 0 ; i <= n ; i++) {

        if (i % 2 != 0) {
            printf("%d \n", i);
            resultado += i;
        }

    }

    printf("O resultado é: %d", resultado);

    return 0;
}