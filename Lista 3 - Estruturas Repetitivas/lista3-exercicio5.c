#include<stdio.h>

int main() {

    int numero, contador = 1;

    printf("Insira um número: ");
    scanf("%d", &numero);

    while (contador <= 10) {
        printf("%d X %d = %d\n", numero, contador, (numero * contador));
        contador++;
    }

}