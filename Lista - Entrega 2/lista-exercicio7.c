#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* capitalizeString(char* vetor, int tamanho) {
    char* convertida = (char*) malloc(tamanho * sizeof(char));
    for(int i = 0 ; i < tamanho ; i++) {
        if(vetor[i] >= 97 && vetor[i] <= 122) {
            convertida[i] = vetor[i] - 32;
        } else {
            convertida[i] = vetor[i];
        }
    }
    convertida[tamanho] = '\0';
    return convertida;
}

int main() {

    char *vetor = (char *) malloc(100 * sizeof(char));;

    printf("Insira uma string: ");
    gets(vetor);

    char* convertida = capitalizeString(vetor, strlen(vetor));

    printf("%s", convertida);

    free(vetor);
    free(convertida);
    
    return 0;
}