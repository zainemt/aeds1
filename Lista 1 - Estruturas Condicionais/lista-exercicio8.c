#include<stdio.h>

int main() {

    int n;

    printf("Insira o valor da nota: ");
    scanf("%d", &n);

    if (!(n >= 0 && n <= 10)) {
        printf("Erro.");
    }

    return 0;
}