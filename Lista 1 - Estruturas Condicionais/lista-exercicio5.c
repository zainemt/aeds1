#include<stdio.h>

int main() {

    int ano;

    printf("Insira um ano: ");
    scanf("%d", &ano);
 
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano é bissexto.");
    } else {
        printf("O ano não é bissexto.");
    }

    return 0;
}