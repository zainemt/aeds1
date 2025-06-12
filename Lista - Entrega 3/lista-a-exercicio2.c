#include <stdio.h>
#include <string.h>

int main()
{
    char nomeArquivo[100];
    printf("Insira o nome do arquivo: ");
    gets(nomeArquivo);

    FILE *arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL)
    {
        printf("O arquivo não foi aberto. \n");
        return 1;
    }
    else
    {
        printf("Arquivo aberto. \n");
    }
    
    int countSetosa = 0;
    int countVersicolor = 0;
    int countVirginica = 0;
    char linha[100];
    char *especie;

    while (fgets(linha, sizeof(linha), arquivo))
    {
        especie = strtok(linha, ",");

        while (especie != NULL) {
            char *prox = strtok(NULL, ",");
            if (prox == NULL) break;
            especie = prox;
        }

        if (especie != NULL)
        {
            especie[strcspn(especie, "\n")] = '\0';

            if (strcmp(especie, "setosa") == 0)
            {
                countSetosa++;
            }
            else if (strcmp(especie, "versicolor") == 0)
            {
                countVersicolor++;
            }
            else if (strcmp(especie, "virginica") == 0)
            {
                countVirginica++;
            }
        }
    }

    fclose(arquivo);

    printf("Quantidade por espécie:\n");
    printf("Setosa: %d\n", countSetosa);
    printf("Versicolor: %d\n", countVersicolor);
    printf("Virginica: %d\n", countVirginica);

    return 0;
}