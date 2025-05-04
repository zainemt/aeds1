#include<stdio.h> 
#include<string.h>

int main() {

    char login[10];
    char senha[10];

    printf("Insira um nome de login: ");
    scanf("%s", &login);

    fflush(stdin);

    printf("Insira uma senha: ");
    scanf("%s", &senha);

    if (strcmp(login, "admin") == 0 && strcmp(senha, "1234") == 0) {
        printf("Acesso permitido.");
    } else {
        printf("Acesso negado.");
    }

}