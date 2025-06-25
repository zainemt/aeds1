#ifndef LOCAL_H
#define LOCAL_H

#include <cstdio>

struct Local {
    char nome[100];
    int x;
    int y;
};

FILE *carregarArquivoLocais(char *nomeArquivo);
void fecharArquivoLocais(FILE *arquivo);

void cadastrarLocais(Local locais[], int quantidade);
void listarLocais(char *nomeArquivo);
void atualizarLocal(char *nomeArquivo, char *nomeBusca);
void excluirLocal(char *nomeArquivo, char *nomeBusca);

#endif
