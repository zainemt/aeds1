#include<stdio.h>

int main() {

    int n, numero = 0, n1 = 0, n2 = 1;

    printf("Insira um número: ");
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++) {
        if (i == 1) {
            printf("%d ", n1);
        } else if (i == 2) {
            printf("%d ", n2);
        } else {
            numero = n1 + n2; 
            n1 = n2; 
            n2 = numero; 
            printf("%d ", numero);
        }
    }

    return 0;
}