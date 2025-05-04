#include<stdio.h>
#include<math.h>

void medias(float n1, float n2, float n3, char option) {

    float media;

    if(option == 'a' || option == 'A') {
        media = (n1 + n2 + n3) / 3;
        printf("A média aritmédica é: %.2f", media);
    } else if (option == 'p' || option == 'P') {
        media = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
        printf("A média ponderada é: %.2f", media);
    }

}

int main() {

    char option;
    float n1, n2, n3;

    printf("Escolha uma das opções abaixo: \n");
    printf("(A/a): Média aritmédica \n");
    printf("(P/p): Média ponderada \n");
    scanf("%c", &option);

    if (option == 'p' || option == 'P' || option == 'A' || option == 'a') {
        printf("Insira três números inteiros: ");
        scanf("%f %f %f", &n1, &n2, &n3);
        medias(n1, n2, n3, option);
    } else {
        printf("Valor inválido");
    }

    return 0;
}