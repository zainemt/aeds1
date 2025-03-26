#include<stdio.h>

int main() {

    int valor, c, d, u, q100, q50, q20, q10, q5, q2, q1 = 0;

    printf("Insira um valor para saque: ");
    scanf("%d", &valor);

    if (valor > 100) {
        q100 = (valor / 100);
        valor %= 100;    
    }

    if (valor > 50) {
        q50 = (valor / 50);
        valor %= 50;
    }

    q20 = (valor / 20);
    valor %= 20;

    q10 = (valor / 10);
    valor %= 10;

    q5 = (valor / 5);
    valor %= 5;

    q2 = (valor / 2);
    valor %= 2;

    q1 = valor;
    

    printf("Notas de 100: %d nota(s) \n", q100);
    printf("Notas de 50: %d nota(s) \n", q50);
    printf("Notas de 20: %d nota(s) \n", q20);
    printf("Notas de 10: %d nota(s) \n", q10);
    printf("Notas de 5: %d nota(s) \n", q5);
    printf("Notas de 2: %d nota(s) \n", q2);
    printf("Notas de 1: %d nota(s) \n", q1);

}