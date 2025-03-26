#include<stdio.h>

int main() {

    int a, b, c;

    printf("Insira os três valores correspondentes aos lados do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c) {
        if (a == b && b == c) {
            printf("Equilátero: todos os lados são iguais.");
        }
        if ((a == b  && a != c ) || (a == c && a != b) || (b == c && b != a)) {
            printf("Isóceles: dois lados iguais.");
        }
        if (a != b && b != c) {
            printf("Escaleno: todos os lados são diferentes.");
        }
    } else {
        printf("Não é triângulo");
    }
    
    return 0;
}