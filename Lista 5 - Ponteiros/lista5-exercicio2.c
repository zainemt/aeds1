#include<stdio.h>

void mediaSalarial() {
    float salario = 1, media, qtdSalario = 0, qtdFamilias = 0;
    while (salario != 0) {
        printf("Insira o valor do salário familiar:");
        scanf("%f", &salario);
        qtdSalario++;
        qtdFamilias++;
        media += salario;
    }
    media /= qtdSalario;
    printf("A média salarial é %.2f", media);
}

int main() {

    mediaSalarial();

}