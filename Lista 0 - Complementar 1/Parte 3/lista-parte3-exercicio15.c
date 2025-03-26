#include<stdio.h>

int main() {

    char letra;
    int inteiro;
    float numero;

    printf("Insira uma letra: ");
    scanf("%c", &letra);

    printf("Insira um número inteiro: ");
    scanf("%d", &inteiro);

    printf("Insira um número com ponto: ");
    scanf("%f", &numero);

    printf("%c %d %f \n", letra, inteiro, numero);
    printf("%c\t%d\t%f \n", letra, inteiro, numero);
    printf("%c\n%d\n%f", letra, inteiro, numero);
}