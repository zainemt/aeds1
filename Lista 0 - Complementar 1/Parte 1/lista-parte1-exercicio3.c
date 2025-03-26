#include<stdio.h>

int main() {

    float A, B, C;

    printf("Insira dois números: ");
    scanf("%f %f", &A, &B);

    C = A;
    A = B;
    B = C;

    printf("O primeiro número é: %.2f \n", A);
    printf("O segundo número é: %.2f \n", B);
}