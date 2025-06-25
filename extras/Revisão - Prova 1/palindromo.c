#include<stdio.h>

int main() {

    int n, resultado = 0, temp;

    printf("Insira um número: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0) {
        resultado = (resultado * 10) + (n % 10);
        n /= 10;
    }

    if (resultado == temp) {
        printf("O número %d é um palíndromo", resultado);
    } else {
        printf("O número %d não é um palíndromo", temp);
    }

    return 0;
}