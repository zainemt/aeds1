#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void numerosAleatorios(int** matriz, int m, int n, int k) {
    srand(time(NULL));

    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; j++){
            matriz[i][j] = ((rand() % k) + 1);
        }
    }
}

int main() {

    int m, n, k;
    do {
        printf("Insira o total de linhas: ");
        scanf("%d", &m);
        printf("Insira o total de colunas: ");
        scanf("%d", &n);
        printf("Insira o número máximo contido na matriz: ");
        scanf("%d", &k);
    } while((m > 100 || m <= 0) || (n > 100 || n <= 0) || (k > 100 || k <= 0));
    

    int** matriz = (int**) malloc(m * sizeof(int*));

    for (int i = 0; i < m; i++) {
        matriz[i] = malloc(n * sizeof(int));
    }

    numerosAleatorios(matriz, m, n, k);

    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < n ; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}