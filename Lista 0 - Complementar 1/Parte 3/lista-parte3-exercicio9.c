#include<stdio.h>

int main() {

    float n1, n2, aux;

    printf("Insira dois números do tipo float: ");
    scanf("%f %f", &n1, &n2);

    aux = n1;
    n1 = n2;
    n2 = aux;

    printf("O primeiro número é (n1 -> n2): %.2f \n", n1);
    printf("O segundo número é (n2 -> n1): %.2f \n", n2);

    return 0;
}