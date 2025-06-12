#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *abrirArquivo(char nomeArquivo[100], char modificador[3])
{
    FILE *arquivo = fopen(nomeArquivo, modificador);
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }
    else
    {
        printf("Arquivo aberto: %s. \n", nomeArquivo);
    }
    return arquivo;
}

void separarEspecies(FILE *arquivo, FILE *setosa, FILE *versicolor, FILE *virginica)
{

    char linha[100];

    while (fgets(linha, sizeof(linha), arquivo))
    {
        linha[strcspn(linha, "\n")] = '\0';

        char linhaOriginal[100];
        strcpy(linhaOriginal, linha);

        char *token = strtok(linha, ",");
        char *especie = NULL;

        while (token != NULL)
        {
            especie = token;
            token = strtok(NULL, ",");
        }

        if (strcmp(especie, "setosa") == 0)
        {
            fprintf(setosa, "%s\n", linhaOriginal);
        }
        else if (strcmp(especie, "versicolor") == 0)
        {
            fprintf(versicolor, "%s\n", linhaOriginal);
        }
        else if (strcmp(especie, "virginica") == 0)
        {
            fprintf(virginica, "%s\n", linhaOriginal);
        }
    }
}

int main()
{
    FILE *arquivo = abrirArquivo("iris.csv", "r");
    FILE *setosa = abrirArquivo("setosa.csv", "w");
    FILE *versicolor = abrirArquivo("versicolor.csv", "w");
    FILE *virginica = abrirArquivo("virginica.csv", "w");

    separarEspecies(arquivo, setosa, versicolor, virginica);

    fclose(arquivo);
    fclose(setosa);
    fclose(versicolor);
    fclose(virginica);
}