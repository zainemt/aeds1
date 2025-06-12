#include<stdio.h>

int funcao(int x) {

    if (x == 0) {
        printf("0 \n");
        return 0;
    }
    
    printf("%d \n", x);
    x--;
    funcao(x);
}

int main() {

    int x;
    printf("Insira a condição de parada:");
    scanf("%d", &x);

    funcao(x);
}