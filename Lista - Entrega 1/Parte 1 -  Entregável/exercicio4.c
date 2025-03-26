#include<stdio.h>

int main() {

    int n, enesimo = 0, t1 = 1, t2 = 0;

    printf("Insira um número inteiro: ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n ; i++) {
        
        if (i == 1) {
            enesimo = t2;
        } else if (i == 2) {
            enesimo = t1;
        } else {
            enesimo = t1 + t2;
            t2 = t1;
            t1 = enesimo;
        }
        
        printf("%d -> %d \n", i ,enesimo);
    }

    printf("O resultado é: %d", enesimo);

    return 0;
}