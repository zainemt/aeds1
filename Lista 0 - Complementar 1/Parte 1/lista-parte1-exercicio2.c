#include<stdio.h>

int main() {

    int n1, n2, n3;

    printf("Insira o valor das 3 notas: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("A soma das notas é: %d \n", (n1 + n2 + n3));
    printf("A média das notas é: %d \n", ((n1 + n2 + n3) / 3));
    printf("O produto das notas é: %d \n", (n1 * n2 * n3));

}