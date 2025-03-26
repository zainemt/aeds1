#include<stdio.h>

int main() {

    int numero, i = 0;
    char binario[100];

    do {
        printf("Insira um número inteiro positivo: ");
        scanf("%d", &numero);
    } while(numero < 0);

    if (numero == 0) {
        printf("0");
        return 0;
    }

    do  {
        if (numero != 0 && numero % 10 == 0) {
            binario[i] = '0';
        } else {
            binario[i] = (numero % 10) + '0'; //conversão do número para char
        }
        numero /= 10;
        i++;
    } while(numero != 0);

    binario[i] = '\0';

    printf("o número é: %s", binario);

    return 0;

}