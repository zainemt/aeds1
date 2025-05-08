#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define VETOR_SIZE 50

void verificarPalindromo(char* palavra) {

    int resultado = 0;
    int aux = strlen(palavra);

    for(int i = 0 ; i < (strlen(palavra) / 2) ; i++) {
        if ((palavra[i] - 32 == palavra[aux - i - 1]) || 
        (palavra[i] + 32 == palavra[aux - i - 1]) || 
        (palavra[i] == palavra[aux - i - 1])) {
            resultado++;
        }
    }

    if(resultado > 0) {
        printf("É um palíndromo.");
    } else {
        printf("Não é um palíndromo.");
    }
}

int main() {

    char* palavra = (char*) malloc(VETOR_SIZE * sizeof(char));

    printf("Insira uma palavra: ");
    scanf("%s", palavra);

    verificarPalindromo(palavra);
}