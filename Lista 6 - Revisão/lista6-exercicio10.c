#include<stdio.h>
#include<string.h>

int main() {

    char frase[100];

    printf("Digite a frase: ");
    gets(frase);
    printf("%d \n", strlen(frase));

    char* token = strtok(frase, " ");

    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }

}