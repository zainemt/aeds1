#include <stdio.h>
#include <stdlib.h>

int quantidadeLinhas(FILE *arquivo)
{
    int linhas = 0;
    char c;
    while ((c = fgetc(arquivo)) != EOF)
    {
        if (c == '\n')
        {
            linhas++;
        }
    }
    return linhas;
}

int main()
{
    char nomeArquivo[100];
    printf("Insira o nome do arquivo: ");
    gets(nomeArquivo);

    FILE* arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL)
    {
        printf("O arquivo não foi aberto. \n");
        return 1;
    }
    else
    {
        printf("Arquivo aberto. \n");
    }

    int linhas = quantidadeLinhas(arquivo);
    printf("O arquivo possui %d linhas", linhas);

    fclose(arquivo);
}