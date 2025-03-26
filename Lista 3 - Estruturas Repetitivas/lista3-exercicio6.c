#include<stdio.h>
#include<math.h>

int main() {
    
    int numero, resultado = 0;

    printf("Insira um número: ");
    scanf("%d", &numero);

    do {
        resultado = (resultado * 10) + (numero % 10);
        numero /= 10;
    } while (numero != 0);

    printf("O número é: %d \n", resultado);
    
}
