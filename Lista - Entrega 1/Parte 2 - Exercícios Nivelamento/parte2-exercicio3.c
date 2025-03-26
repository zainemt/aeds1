#include<stdio.h>

int main() {

    int a, b, c, soma;
    float media;

    printf("Insira três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%d é o maior número. \n", a);
    } else if (b >= c) {
        printf("%d é o maior número. \n", b);
    } else {
        printf("%d é o maior número. \n", c);
    }

    soma = a + b + c;
    media = soma / 3.0;

    printf("A soma dos elementos é %d \n", soma);
    printf("A média dos elementos é %.2f \n", media);

    return 0;
}