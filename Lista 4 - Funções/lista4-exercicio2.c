#include<stdio.h>
#include<math.h>
#define PI 3.141592

float areaCirculo(float raio) {
    return (PI * pow(raio, 2));
}

int main() {

    float raio, area;

    printf("Insira o valor do raio: ");
    scanf("%f", &raio);

    area = areaCirculo(raio);

    printf("A área do circulo é %.2f", area);
}