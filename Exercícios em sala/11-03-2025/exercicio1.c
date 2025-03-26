/*
implemente uma calculadora de operações básicas (+, -, *, /). Seu programa deve apresentar
as seguintes opções para o usuário e executar uma operação por vez:
escolha a operação matemática desejada:
1 - somar
2 - subtrair
3 - multiplicas
4 - dividir
0 - sair
Digite a opção desejada:
*/
#include<stdio.h>

int main() {

    int option;
    float a, b;

    do {

        printf("Escolha a operação matemática desejada: \n");
        printf("======================================= \n");
        printf("(1) - Somar \n");
        printf("(2) - Subtrair \n");
        printf("(3) - Multiplicar \n");
        printf("(4) - Dividir \n");
        printf("(0) - Sair \n");
        printf("======================================= \n");
        printf("Digite a opção disejada: \n");
        scanf("%d", &option);

        if (option != 0 && option >= 1 && option <= 4) {
            printf("Insira o primeiro número: ");
            scanf("%f", &a);
            
            printf("Insira o segundo número: ");
            scanf("%f", &b);    
        }

        switch(option) {
            case 1:
                printf("%.2f + %.2f = %.2f \n", a, b, (a + b));
                break;
            case 2:
                printf("%.2f - %.2f = %.2f \n", a, b, (a - b));
                break;
            case 3:
                printf("%.2f * %.2f = %.2f \n", a, b, (a * b));
                break;
            case 4:
                printf("%.2f / %.2f = %.2f \n", a, b, (a / b));
                break;
            case 0:
                printf("Programa encerrado.");
                break;
            default:
                printf("Opção inválida. \n");
                break;
        }

    } while (option != 0);
    
    return 0;
}