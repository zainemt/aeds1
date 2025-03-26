#include<stdio.h>
const float valor1 = 1.5;
const float valor2 = 2.5;

int main() {

    float metrosCubicos, valor;

    printf("Insira o consumo (em metros cúbicos): ");
    scanf("%f", &metrosCubicos);

    if (metrosCubicos <= 10) {
        valor = 10;
    } else if (metrosCubicos >= 11 && metrosCubicos <= 30) {
        valor = metrosCubicos * valor1;
    } else {
        valor = metrosCubicos * valor2;
    }

    printf("O valor da conta é R$ %.2f", valor);

}