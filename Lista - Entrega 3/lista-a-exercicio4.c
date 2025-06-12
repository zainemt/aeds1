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

int main() {

    FILE* arquivo = abrirArquivo("iris.csv", "r");
    

}