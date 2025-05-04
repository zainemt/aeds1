#include<stdio.h>

int main() {

    int n1, n2, n3;
    float p1, p2, p3, media;

    printf("Insira as três notas: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Insira os três pesos: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    media = ((n1 * p2) + (n2 * p2) + (n3 * p3) / (p1 + p2 + p3));

    if (media < 5) {
        printf("Reprovado.");
    } else if (media >= 5 && media < 7) {
        printf("Recuperação.");
    } else {
        printf("Aprovado.");
    }

}