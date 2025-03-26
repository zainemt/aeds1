#include<stdio.h>

int main() {

    int n;

    printf("Insira um número inteiro: ");
    scanf("%d", &n);

    printf("O valor é %f", n);
    //não ocorre a saída, por conta de tentar imprimir um valor que não é do mesmo tipo do dado inserido

    return 0;
}