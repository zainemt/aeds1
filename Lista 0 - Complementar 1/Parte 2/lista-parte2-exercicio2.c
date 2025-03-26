#include<stdio.h>

int main() {

    float fahrenheit, celsius;

    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = ((5.0 / 9.0) * (fahrenheit - 32.0));
    /*para que a saída seja float, necessário a inserção do número inteiro no formato float
    para que seja considerado as casa decimais*/

    printf("%.1f°F em °C é: %.2f", fahrenheit, celsius);
}