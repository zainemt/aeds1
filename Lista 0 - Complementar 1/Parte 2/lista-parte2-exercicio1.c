#include<stdio.h>
#include<math.h>

int main() {

    float peso, altura, imc;

    printf("Insira seu peso (KG): ");
    scanf("%f", &peso);

    printf("Insira sua altura (m): ");
    scanf("%f", &altura);

    imc = (peso / pow(altura, 2));

    printf("o IMC da peso %.2f e altura %.2f é: %.2f", peso, altura, imc);

}