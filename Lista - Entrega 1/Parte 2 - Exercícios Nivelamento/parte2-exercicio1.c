#include<stdio.h>

int main() {

    float kmh, ms;

    printf("Insira a velocidade em Km/H: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("A velocidade em M/s é %.2f", ms);

    return 0;

}