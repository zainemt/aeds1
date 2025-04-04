#include<stdio.h>
#include<math.h>

int main() {

    int casosDeTeste, temp, casasDoTabuleiro[100], kgs[100];

    scanf("%d", &casosDeTeste);

    for (int i = 0 ; i < casosDeTeste ; i++) {
        scanf("%d", &temp);
        casasDoTabuleiro[i] = temp;
        if (i + 1 == casosDeTeste) {
            casasDoTabuleiro[i + 1] = '\n';      
        }
    }
    
    for (int i = 0 ; i < casosDeTeste ; i++) {
        temp = 0;
        for (int j = 0 ; j < casasDoTabuleiro[i] ; j++) {
            temp += pow(2, j);
        }
        temp /= 12000;
        kgs[i] = temp;
        printf("%d \n", temp);
        if (i + 1 == casosDeTeste) {
            kgs[i + 1] = '\n';      
        }
    }   
} 