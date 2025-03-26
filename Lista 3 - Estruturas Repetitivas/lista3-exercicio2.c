#include<stdio.h>
#include<math.h>

int main() {

    int numero, divisores = 2, contador = 0;
    float raiz;

    printf("Insira um número: \n");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido: Negativo.");
        return 0;
    }

    if (numero >= 0) {
        raiz = sqrt(numero);

        while (divisores <= raiz) {
            if (numero % divisores == 0) {
                contador = 1;
            }
            divisores++;
        }
    }

    if (contador == 0) {
        printf("É primo.");
    } else {
        printf("Não é primo.");
    }

    return 0;
}