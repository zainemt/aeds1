#include<stdio.h>

int main() {

    int n1, n2, n3;

    printf("Insira três valores inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("A soma de (%d + %d + %d) é %d", n1, n2, n3, (n1 + n2 + n3));

}