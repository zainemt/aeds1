#include<stdio.h>

int main() {

    int n;

    printf("Insira um número inteiro: ");
    fflush(stdin);
    scanf("%d", &n);

    if (n == 1 || n == 2 || n == 3 || n == 7) {
        printf("É primo. \n");
    } else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) {
        printf("Não é primo. \n");
    } else {
        printf("É primo. \n");
    }
    
}