#include<stdio.h>

int main() {

    int n, resultado = 0;

    printf("Insira um número: ");
    scanf("%d", &n);

    for (int i = 0 ; i <= n ; i++) {
        if ((i % 3 == 0 || i % 5 == 0) && !(i % 3 == 0 && i % 5 == 0)) {
            resultado += i;
            printf("%d \n", i);
        }
    }

    printf("O resultado é: %d", resultado);

    return 0;
}