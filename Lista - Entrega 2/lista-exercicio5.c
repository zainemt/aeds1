#include <stdio.h>
#include <string.h>

int verificaEmail(char email[]) {
    for (int i = 0 ; email[i] != '\0' ; i++) {
        if (email[i] == '@') {
            return i;
        }
    }
    return -1;
}

int main() {
    char email[100];

    printf("Digite o endereço de e-mail: ");
    fgets(email, 100, stdin);

    email[strcspn(email, "\n")] = '\0';

    int pos = verificaEmail(email);

    if (pos != -1) {
        printf("E-mail válido \n");
    } else {
        printf("E-mail inválido \n");
    }

    return 0;
}
