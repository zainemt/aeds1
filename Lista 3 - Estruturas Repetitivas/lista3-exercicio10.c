#include<stdio.h>
#include<string.h>

int main() {
    
    char binario[100];
    int numero, i = 0;

    printf("Insira um número decimal: ");
    scanf("%d", &numero);

    while(numero > 0) {
        binario[i] = (numero % 2) + '0'; //conversão do número para char
        numero /= 2;
        i++;
    }
    
    binario[i] = '\0'; //finaliza a string

    char temp;

    for(int j = 0 ; j < i / 2 ; j++) {
        temp = binario[(i - 1) - j];
        binario[(i - 1) - j] = binario[j];
        binario[j] = temp;
    }

    printf("%s", binario);
}