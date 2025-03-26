#include<stdio.h>

int main() {

    float price;

    printf("Insira o valor do produto: ");
    scanf("%f", &price);

    if (price < 50) {
        printf("Barato: preço < 50");
    } else if (price >= 50 && price < 150) {
        printf("Médio: 50 ≤ preço < 150");
    } else {
        printf("Caro: preço ≥ 150 ");
    }

    return 0;
}