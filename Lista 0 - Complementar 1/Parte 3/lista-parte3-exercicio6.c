#include<stdio.h>

int main() {

    double valor;

    printf("Insira um valor do tipo double: ");
    scanf("%g", &valor);

    valor = (valor / 10);

    printf("Valor %g", valor);
    //a saída é um valor do tipo notação científica

}