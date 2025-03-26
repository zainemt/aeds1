#include<stdio.h>

int main() {

    int opcao, meses, contador = 0;
    float salario;

    do {
        printf("Escolha uma das opções: \n");
        printf("(1). Novo Salário. \n");
        printf("(2). Férias \n");
        printf("(3). Décimo Terceiro. \n");
        printf("(4). Sair. \n");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao < 4) {
            do {
                printf("Insira o salário: \n");
                scanf("%f", &salario);
            } while(salario <= 0);
        }

        switch(opcao) {

            case 1:
                if (salario < 1000) {
                    salario += (salario *  0.15);
                } else if (salario >= 1000 && salario <= 2000) {
                    salario += (salario * 0.1);
                } else {
                    salario += (salario * 0.05);
                }

                printf("O novo salário é R$ %.2f \n", salario);
            break;

            case 2:
                salario += (salario / 3);
                printf("O valor das férias é R$ %.2f \n", salario);
            break;

            case 3:
                do {
                    if (contador > 0) {
                        printf("Valor de meses inválido. \n");
                    }

                    printf("Insira o número de meses de trabalho (máx: 12) \n");
                    scanf("%d", &meses);
                    contador++;
                } while (meses < 0 && meses <= 12);

                salario *= (meses/12);
                
                printf("O valor do décimo terceiro é R$ %.2f \n", salario);
            break;

            case 4:
                printf("Programa encerrado. \n");
            break;

            default:
                printf("Opção inválida. \n");
            break;
        }

    } while (opcao != 4);

    return 0;
}