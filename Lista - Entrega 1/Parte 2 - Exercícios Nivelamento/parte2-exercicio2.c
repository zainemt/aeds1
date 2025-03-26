#include<stdio.h>
#include<math.h>
#define PI 3.141592

int main() {

    float raio, area;

    printf("Insira o valor do raio: ");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);

    printf("A área do círculo é %.2f", area);

    return 0;
}