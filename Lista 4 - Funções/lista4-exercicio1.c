#include<stdio.h>

float paraMetrosPorSegundo(float kmh) {
    return (kmh / 3.6);
}

int main() {

    float kmh, ms;

    printf("Insira um valor em Km/H: ");
    scanf("%f", &kmh);

    ms = paraMetrosPorSegundo(kmh);

    printf("O valor de %.2f Km/h em metros por segundo é %.2f M/s", kmh, ms);

}