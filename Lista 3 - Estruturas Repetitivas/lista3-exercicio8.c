#include<stdio.h>

int main() {

    int n, resultado = 1, contador = 1;

    do {
        printf("Insira um número POSITIVO: ");
        scanf("%d", &n);
    } while(n < 0);

    do {
        if (n == 0) {
            printf("0! = 1");
            return 0;
        } else {

            resultado *= n;
            
            if (contador == 1) {
                printf("%d! = %d x ", n, n);
            } else if (n == 1) {
                printf("%d = %d \n", n, resultado);
            } else {
                printf("%d x ", n);
            }
            
            n--;
            contador++;
        }
    } while(n > 0);

    return 0;
}