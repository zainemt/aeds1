#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    int numero, tentativa;

    srand(time(NULL));
    numero = ((rand() % 100) + 1);

    do {
        printf("Insira um número: ");
        scanf("%d", &tentativa);

        if(tentativa != numero) {
            printf("Número incorreto \n");
            if (tentativa > numero) {
                printf("O número correto é menor que %d \n", tentativa);
            } else {
                printf("O número correto é maior que %d \n", tentativa);
            }
        }
    } while(tentativa != numero);

    printf("Parabéns! acertou o número: %d \n", numero);

    return 0;

} 