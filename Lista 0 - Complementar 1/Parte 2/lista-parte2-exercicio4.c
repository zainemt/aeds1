#include<stdio.h>

int main() {

    int dias, anos, semanas, diasFinais;

    printf("Insira a quantidade de dias: ");
    scanf("%d", &dias);

    anos = (dias / 365);
    
    diasFinais = dias % 365;

    semanas = diasFinais / 7;

    diasFinais = diasFinais % 7;

    printf("%d dia(s) = %d ano(s), %d semana(s) e %d dia(s)", dias, anos, semanas, diasFinais);

}