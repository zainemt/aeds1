#include<stdio.h>

int main() {

    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if (idade > 0 && idade <= 12) {
        printf("Criança (0-12 anos)");
    } else if (idade >= 13 && idade <= 17) {
        printf("Adolescente (13-17 anos)");
    } else if (idade >= 18 && idade <= 59) {
        printf("Adulto (18-59 anos)");
    } else {
        printf("Idoso (60+ anos)");
    }

    return 0;
}