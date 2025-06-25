#include<stdio.h>
#include<stdlib.h>

void trocar(int *p1, int *p2) {
    int temp = *p2;
    *p2 = *p1;
    *p1 = temp;
}

int main() {

    int x1 = 10;
    int x2 = 20;

    int *p1 = &x1;
    int *p2 = &x2;

    printf("Antes da troca: \n X1: %d \n X2: %d \n", x1, x2);
    printf("P1: %d - P2: %d \n", *p1, *p2);

    trocar(p1, p2);

    printf("Depois da troca: \n X1: %d \n X2: %d \n", x1, x2);
    printf("P1: %d - P2: %d \n", *p1, *p2);
}