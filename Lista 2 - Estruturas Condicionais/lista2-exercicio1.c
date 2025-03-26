#include<stdio.h>

int main() {

    int nota;

    printf("Insira uma nota: ");
    scanf("%d", &nota);

    if (nota >= 90 && nota <= 100) {
        printf("Conceito A.");
    } else if (nota >= 80 && nota <= 89) {
        printf("Conceito B.");
    } else if (nota >= 70 && nota <= 79) {
        printf("Conceito C.");
    } else if (nota >= 60 && nota <= 69) {
        printf("Conceito D.");
    } else {
        printf("Conceito F.");
    }

    return 0;
}