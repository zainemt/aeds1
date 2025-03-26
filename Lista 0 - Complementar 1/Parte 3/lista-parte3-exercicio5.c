#include<stdio.h>

int main() {

    float n;

    printf("Insira um número float: ");
    scanf("%f", &n);

    printf("O valor é %d", n);    
    //não ocorre a saída, por conta de tentar imprimir um valor que não é do mesmo tipo do dado inserido

    return 0;
}