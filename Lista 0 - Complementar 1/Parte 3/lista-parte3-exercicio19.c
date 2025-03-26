#include<stdio.h>

int main() {

    int idade, anoAtual;

    printf("Insira a sua idade: ");
    scanf("%d", &idade);

    printf("Insira o ano atual: ");
    scanf("%d", &anoAtual);

    printf("O seu ano de nascimento é %d", (anoAtual - idade));
}