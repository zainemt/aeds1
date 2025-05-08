#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAMANHO_VETOR 50

void trocarCaractere(char* palavra) {
    for (int i = 0 ; i < TAMANHO_VETOR ; i++) {
        if (palavra[i] >= 97 && palavra[i] <= 122) {
            palavra[i] -= 32;
        }
    }
}

int main() {

    char* palavra = (char*) malloc(TAMANHO_VETOR * sizeof(char));
    printf("Insira uma palavra: ");
    scanf("%s", palavra);

    palavra[strlen(palavra)] = '\n';

    trocarCaractere(palavra);
    
    printf("%s", palavra);

}