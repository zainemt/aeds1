#include<stdio.h>

int main() {

    int n1, n2;

    printf("Insira o primeiro número: ");
    scanf("%d", &n1);

    
    printf("Insira o segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("O primeiro número (%d) é maior que o segundo (%d)", n1, n2);
    } else {
        printf("O segundo número (%d) é maior que o primeiro (%d)", n2, n1);
    }

    return 0;
}