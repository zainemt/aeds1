#include<stdio.h>

int main() {

    char letra;

    printf("Insira um caractere maiúsculo: ");
    scanf("%c", &letra);

    printf("%c", (letra + 32));
}