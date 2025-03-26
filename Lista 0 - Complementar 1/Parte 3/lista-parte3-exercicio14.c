#include<stdio.h>

int main() {

    char letra1, letra2, letra3;

    printf("Insira três caracteres: ");
    letra1 = getchar();
    letra2 = getchar();
    letra3 = getchar();

    printf("%c\n%c\n%c", letra1, letra2, letra3);
}   