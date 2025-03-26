#include<stdio.h>

int main() {

    float reais, cotacao, dolares;

    printf("Insira o valor em reais: ");
    scanf("%f", &reais);

    printf("Insira o valor da cotação do dólar: ");
    scanf("%f", &cotacao);

    dolares = (reais / cotacao);

    printf("O valor de (%.2f Reais) em dólares é: %.2f Dólares (cotação: %.2f).", reais, dolares, cotacao);

}