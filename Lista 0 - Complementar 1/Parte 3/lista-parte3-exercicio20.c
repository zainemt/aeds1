#include<stdio.h>

int main() {

    float kmH, mS;

    printf("Insira uma velocidade em Km/h: ");
    scanf("%f", &kmH);

    mS =  (kmH / 36);

    printf("O valor de (%.2f Km/h) em m/s é %.2f", kmH, mS);

}