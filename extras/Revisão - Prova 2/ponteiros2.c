#include<stdio.h>
#include<stdlib.h>

int main() {

    int x1 = 10;
    int x2 = 20;

    int *p1 = &x1;
    int *p2 = &x2;

    printf("Conteúdo da variável: X1: %d - X2: %d \n", x1, x2);
    printf("Endereço da variável: X1: %p - X2: %p \n", &x1, &x2);

    printf("Conteúdo: P1: %d - P2: %d \n", *p1, *p2);
    printf("Endereço do ponteiro: P1: %p - P2: %p \n", &p1, &p2);
    printf("Endereço do conteúdo: P1: %p - P2: %p \n", p1, p2);

}