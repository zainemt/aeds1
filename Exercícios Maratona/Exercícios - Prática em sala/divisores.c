#include<stdio.h>

int contarDivisores(int numero) {

    int contador = 0;
    for (int i = 1 ; i <= numero ; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }
    return contador;
}

int main() {

    int numero;
    scanf("%d", &numero);

    int divisores = contarDivisores(numero);
    printf("%d", divisores);

}