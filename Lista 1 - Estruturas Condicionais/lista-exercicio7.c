#include<stdio.h>
#include<math.h>

int main() {

    float peso, altura, imc;

    printf("Insira seu peso e sua altura: ");
    scanf("%f %f", &peso, &altura);

    imc = (peso / (pow(altura, 2)));

    if (imc < 18.5) {
        printf("Abaixo do peso: IMC < 18.5");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Peso normal: 18.5 ≤ IMC < 25");
    } else if (imc >= 25 && imc < 30) {
        printf("Sobrepeso: 25 ≤ IMC < 30");
    } else {
        printf("Obesidade: IMC ≥ 30");
    }

    return 0;
}