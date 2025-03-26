#include<stdio.h>
const int numeroSecreto = 42;

int main() {
    
    int n;

    while (n != numeroSecreto) {

        printf("Insira um número: ");
        scanf("%d", &n);

        if (n > numeroSecreto) {
            printf("O número inserido é maior que o número secreto! \n");
        } else if (n < numeroSecreto) {
            printf("O número inserido é menor que o número secreto! \n");
        }

    }
    
    printf("Número correto!");


}