#include<stdio.h>

int fatorial(int n) {

    int resultado = 1;

    if (n == 1) {
        return n;
    }

    int numero = fatorial(n - 1);

    return (numero * resultado);

}

int main() {

    int resultado = fatorial(5);

    printf("%d", resultado);
}