#include<stdio.h>

int main() {

    char letra;

    printf("Insira um caractere: ");
    //scanf("%c", &letra);
    letra = getchar();
    
    printf("%d", letra);
    
}