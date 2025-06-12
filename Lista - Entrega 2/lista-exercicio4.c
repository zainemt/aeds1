#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    char senha[100];
    int caractere = 0, maiuscula = 0, minuscula = 0, numero = 0;

    printf("Insira uma senha: ");
    scanf("%s", &senha);

    for (int i = 0 ; i < strlen(senha) ; i++) {
        int validador = 0;
        if ((senha[i] >= 33 && senha[i] <= 47) || (senha[i] >= 58 && senha[i] <= 64)) {
            caractere++;
        }
        if (senha[i] >= 48 && senha[i] <= 57) {
            numero++;
        }
        if (senha[i] >= 65 && senha[i] <= 90) {
            maiuscula++;
        }
        if (senha[i] >= 97 && senha[i] <= 122) {
            minuscula++;
        }
    }

    if(caractere == 0 || numero == 0 || minuscula == 0 || maiuscula == 0) {
        printf("Senha inválida. \n");
        if (strlen(senha) < 8) {
            printf("A senha deve conter pelo menos 8 dígitos. \n");
        }
        if(caractere == 0) {
            printf("A senha deve conter pelo menos um caractere especial. \n");
        }
        if(numero == 0) {
            printf("A senha deve conter pelo menos um número. \n");
        }
        if(minuscula == 0) {
            printf("A senha deve conter pelo menos uma letra minúscula. \n");
        }
        if(maiuscula == 0) {
            printf("A senha deve conter pelo menos uma letra maiúscula. \n");
        }
    } else {
        printf("Senha válida.");
    }

}