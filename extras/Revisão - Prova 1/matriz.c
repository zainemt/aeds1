#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main() {

    int matriz[10][10], k = 2, contador = 0;

    srand(time(NULL));

    for (int i = 0 ; i < 10 ; i++) {
        for (int j = 0 ; j < 10 ; j++) {
            matriz[i][j] = ((rand() % 100) + 1);

            while (k <= sqrt(matriz[i][j])) {
                if (matriz[i][j] % k == 0) {
                    contador = 0;
                    break;
                } else {
                    contador++;
                    k++;
                }
            }

            if (contador != 0) {
                printf("%d ", matriz[i][j]);
            }
            contador = 0;
            k = 2;
        }
        printf("\n");
    }

}