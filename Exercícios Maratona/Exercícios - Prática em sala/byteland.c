#include<stdio.h>
#include<stdlib.h>

int main() {

    int N, Q;
    scanf("%d", &N);
    scanf("%d", &Q);

    int **matriz = malloc(N * sizeof(int*));
    for (int i = 0 ; i < N ; i++) {
        matriz[i] = malloc(N * sizeof(int));
        for (int j = 0 ; j < N ; j++) {
            matriz[i][j] = 0;
        }
    }
    
    int operacao;
    scanf("%d", &operacao);

    int x, R;

    switch (operacao)
    {
    case 1:
        scanf("%d %d", &x, &R);
        for (int i = 0 ; i < Q ; i++) {
            matriz[x][i] = R;
        }
    break;

    case 2:
        scanf("%d %d", &x, &R);
        for (int i = 0 ; i < Q ; i++) {
            matriz[i][x] = R;
        }    
    break;

    case 3:
        for (int j = 0 ; j < Q ; j++) {
            matriz[x][j] = R;
        }
    break;
        
    default:
        return 0;
        break;
    }


}