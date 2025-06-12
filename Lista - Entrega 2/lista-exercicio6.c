#include <stdio.h>
#include <string.h>
#include <ctype.h>

void transformarEmMinuscula(char* str) {
    for (int i = 0 ; str[i] ; i++) {
        str[i] = tolower(str[i]);
    }
}

void contaPalavrasRepetidas(char texto[]) {
    char palavras[100][50];
    int contagens[100] = {0};
    int totalPalavras = 0;

    char *token = strtok(texto, " ,.-\n");

    while (token != NULL) {
        transformarEmMinuscula(token);

        int encontrada = 0;
        for (int i = 0; i < totalPalavras; i++) {
            if (strcmp(palavras[i], token) == 0) {
                contagens[i]++;
                encontrada = 1;
                break;
            }
        }

        if (!encontrada) {
            strcpy(palavras[totalPalavras], token);
            contagens[totalPalavras] = 1;
            totalPalavras++;
        }

        token = strtok(NULL, " ,.-\n");
    }

    printf("\nPalavras repetidas no texto:\n");
    for (int i = 0; i < totalPalavras; i++) {
        if (contagens[i] > 1) {
            printf("'%s' aparece %d vezes\n", palavras[i], contagens[i]);
        }
    }
}

int main() {
    char texto[500];

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);

    contaPalavrasRepetidas(texto);

    return 0;
}
