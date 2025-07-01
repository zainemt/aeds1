#include<stdio.h>

int main() {
    char string[100];
    FILE * arquivo = fopen("arquivoDeTexto.txt", "a+");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir ou criar o arquivo");
        return 1;
    }

    printf("Insira o número de string a serem gravas: ");
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0 ; i < n ; i++) {
        fgets(string, sizeof(string), stdin);
        fprintf(arquivo, "%s \n", string);
    }

    rewind(arquivo);

    printf("\nConteúdo do arquivo:\n");
    while (fgets(string, sizeof(string), arquivo)) {
        printf("%s", string);
    }

    fclose(arquivo);

}