#include<stdio.h>
#define PI 3.141592

int main() {

    float graus, radianos;

    printf("Insira um valor em graus: ");
    scanf("%f", &graus);

    radianos = (graus * PI/180);

    printf("O valor de (%.2f°) em radianos é: %.2f Rad", graus, radianos);
}