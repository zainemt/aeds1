#include<stdio.h>

int main() {

    int numero, contador = 0;
    float media = 0;

    do {

        printf("Insira um número: ");
        scanf("%d", &numero);

        if (numero != 0) {
            media += numero;
            contador++;
        }
    
    } while(numero != 0);

    media /= contador;
    
    printf("A média é: %.2f", media);

}