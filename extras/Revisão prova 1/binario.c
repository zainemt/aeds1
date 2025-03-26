#include<stdio.h>

int main() {

    int numero, tamanho;
    char resultado[100], temp;

    printf("Insira um número decimal: ");
    scanf("%d", &numero);

    for (int i = 0 ; numero > 0 ; i++) {
        resultado[i] = (numero % 2) + '0';
        numero /= 2;
        if (numero == 0) {
            i++;
            resultado[i] = '\0';
            tamanho = i;
        }
    }

    for (int j = 0 ; j < (tamanho / 2) ; j++) {
        temp = resultado[(tamanho - j - 1)];
        resultado[(tamanho - j - 1)] = resultado[j];
        resultado[j] = temp;
    }

    printf("%s", resultado);
    
}