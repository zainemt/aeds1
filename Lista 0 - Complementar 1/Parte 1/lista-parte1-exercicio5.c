#include<stdio.h>
#include<math.h>

int main() {

    float valorInicial, taxaJuros, meses, totalAcumulado, jurosRendidos;

    //M = C x (1 + i)^n -> montante total acumulado
    //J = M - C -> valor de juros rendidos

    printf("Insira o valor a ser investido: ");
    scanf("%f", &valorInicial);

    printf("Taxa de juros mensal: ");
    scanf("%f", &taxaJuros);

    printf("Número de meses da aplicação: ");
    scanf("%f", &meses);

    totalAcumulado = (valorInicial * pow((1 + taxaJuros), meses));
    jurosRendidos = (totalAcumulado - valorInicial);

    printf("O valor total acumulado ao final de %.0f meses é: %.2f \n", meses, totalAcumulado);
    printf("O valor de juros rendidos é: %.2f", jurosRendidos);

}