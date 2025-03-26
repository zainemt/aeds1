#include<stdio.h>
#include<math.h>

int main() {

    float a, b, h;

    printf("Insira o valor do primeiro cateto: ");
    scanf("%f", &a);

    printf("Insira o valor do segundo cateto: ");
    scanf("%f", &b);

    h = sqrt((pow(a, 2) + pow(b, 2)));

    printf("A hipotenusa dos catetos (a = %.2f e b = %.2f) é: %.2f", a, b, h);
}