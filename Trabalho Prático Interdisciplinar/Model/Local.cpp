#include <iostream>
#include <string.h>
#include "Local.h"
#include <cstdio>
#define DIRETORIO_LOCAL "Data/locais.txt"

using namespace std;

FILE *carregarArquivoLocais(char *nomeArquivo)
{
    FILE *locais = fopen(nomeArquivo, "w");

    if (locais == NULL)
    {
        cout << "Não foi possível abrir o arquivo: " << nomeArquivo << endl;
        return;
    }

    return locais;
}

void fecharArquivoLocais(FILE *arquivo)
{
    fclose(arquivo);
    cout << "Arquivo fechado com sucesso. \n";
}

void cadastrarLocais(Local locais[], int quantidade)
{

    FILE *arquivoLocais = carregarArquivoLocais(DIRETORIO_LOCAL);

    for (int i = 0; i < quantidade; i++)
    {
        fprintf(arquivoLocais, "%s,%d,%d\n", locais[i].nome, locais[i].x, locais[i].y);
    }

    fecharArquivoLocais(arquivoLocais);
    cout << "Locais cadastrados com sucesso. \n";
}
