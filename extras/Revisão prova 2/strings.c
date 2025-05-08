#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char* string1 = "abcdefg";
    char* string2 = (char*) malloc(strlen(string1) + 1);

    if (string2 == NULL) {
        printf("Erro de alocação\n");
        return 1;
    }

    strcpy(string1, "abcdefg");
    strcpy(string2, "abcdf");

    printf("Antes da cópia: \nstring 1: %s - string 2: %s\n", string1, string2);

    if (strlen(string1) > strlen(string2)) {
        char* aux = (char*) realloc(string2, strlen(string1) + 1);
        if (aux != NULL) {
            string2 = aux;
        } else {
            printf("Erro ao realocar\n");
            free(string2);
            return 1;
        }
    }

    strcpy(string2, string1);

    printf("Após a cópia:\nstring 1: %s - string 2: %s\n", string1, string2);

    free(string2);

    return 0;
}