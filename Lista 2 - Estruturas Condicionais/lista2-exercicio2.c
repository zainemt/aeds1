#include<stdio.h>

int main() {

    int velocidade;

    printf("Insira um valor de velocidade: ");
    scanf("%d", &velocidade);

    if (velocidade <= 60) {
        printf("Velocidade dentro do limite.");
    } else if (velocidade >= 61 && velocidade <= 80) {
        printf("Cuidado! Você está acima do limite.");
    } else {
        printf("Multa aplicada!");
    }
}