#include<stdio.h>
#define Pi 3.141592
#include<math.h>

int main() {

    float volume, raio, altura;

    printf("Insira o raio do cilindro circular: ");
    scanf("%f", &raio);

    printf("Insira a altura do cilindro circular: ");
    scanf("%f", &altura);

    volume = (Pi * pow(raio, 2) * altura);

    printf("O volume do cilindro de raio %.2f e altura %.2f é: %.2f", raio, altura, volume);

}