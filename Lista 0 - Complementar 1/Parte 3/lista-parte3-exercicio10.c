#include<stdio.h>

int main() {

    int dia, mes, ano;

    printf("Insira o valor do dia: ");
    scanf("%d", &dia);
    printf("Insira o valor do mês: ");
    scanf("%d", &mes);
    printf("Insira o valor do ano: ");
    scanf("%d", &ano);

    printf("%d\\%d\\%d", dia, mes, ano);
    //para inserir a contra barra utiliza-se "\\"
}