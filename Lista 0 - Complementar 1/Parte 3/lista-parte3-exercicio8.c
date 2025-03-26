#include<stdio.h>

int main() {

    int n1, n2, aux;

    printf("Insira o primeiro número inteiro: ");
    scanf("%d", &n1);
    printf("Insira o segundo número inteiro: ");
    scanf("%d", &n2);

    aux = n1;
    n1 = n2;
    n2 = aux;

    printf("O primeiro número é (n1 -> n2): %d \n", n1);
    printf("O segundo número é (n2 -> n1): %d \n", n2);

    return 0;
}