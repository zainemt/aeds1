#include<stdio.h>

int main() {

    int n, ant1 = 0, ant2 = 1, resultado = 0;
    
    do {
        printf("Insira um número positivo: ");
        scanf("%d", &n);
    } while(n < 0);

    if (n == 0) {
        printf("%d", ant1);
    } else {
        printf("%d %d ", ant1, ant2);
    }

    while(resultado <= n) {
            resultado = ant1 + ant2;
            ant1 = ant2;
            ant2 = resultado;
            if (resultado <= n) {
                printf("%d ", resultado);
            }
    }
}