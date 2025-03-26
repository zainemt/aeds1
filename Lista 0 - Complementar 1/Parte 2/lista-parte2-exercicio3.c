#include<stdio.h>

int main() {

    int numero, centena, dezena, unidade, invertido;

    printf("Insira um número inteiro com três digitos: ");
    scanf("%d", &numero);

    centena = (numero / 100);
    dezena = (numero - (centena * 100)) / 10;
    unidade = (numero % 10);

    printf("Centena: %d \n", centena);
    printf("Dezena: %d \n", dezena);
    printf("Unidade: %d \n", unidade);

    invertido = (unidade * 100 + dezena * 10 + centena);

    printf("O número invertido(UDC) é: %d", invertido);

}