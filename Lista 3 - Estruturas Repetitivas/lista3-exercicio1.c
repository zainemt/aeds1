#include<stdio.h>

int main() {

    int numero, resultado = 0;
    printf("Ao inserir um número negativo o programa será encerrado. \n");

    do {
        printf("Insira um número: ");
        scanf("%d", &numero);

        if (numero >= 0) {
            resultado += numero;
        }
    } while (numero > 0);

    printf("O resultado total é: %d", resultado);

}