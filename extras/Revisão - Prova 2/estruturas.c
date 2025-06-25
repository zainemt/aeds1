#include<stdio.h>
#include<string.h>

struct pessoa {
    char nome[50];
    int idade;
};

int main() {

    struct pessoa zaine;
    
    
    strcpy(zaine.nome, "Zaine");

    printf("%d", strcmp(zaine.nome, "Zaine"));
    
    zaine.idade = 23;

}
