#include<stdio.h>

int main() {

    int n, resultado = 1;

    printf("Insira um número: ");
    scanf("%d", &n);

    for (int i = n ; i > 0 ; i--) {
        resultado *= i;
    }

    printf("O resultado é %d", resultado);

    return 0;
}