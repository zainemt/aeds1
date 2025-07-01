#include<stdio.h>

int contarDigitos(int numero) {

    if (numero < 10) {
        return 1;
    }

    return 1 + contarDigitos(numero / 10);
}

int main () {

    int n;
    printf("Insira o número inteiro:");
    scanf("%d", &n);

    int total = contarDigitos(n);

    printf("%d", total);

}