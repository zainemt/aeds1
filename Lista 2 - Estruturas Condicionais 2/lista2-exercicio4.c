#include <stdio.h>
#include <ctype.h>

int main()
{

    char c;

    printf("Insira um caractere: ");
    scanf("%c", &c);

    if (isalpha(c))
    {
        if (
            (c == 'a' || c == 'A') ||
            (c == 'e' || c == 'E') ||
            (c == 'i' || c == 'I') ||
            (c == 'o' || c == 'O') ||
            (c == 'u' || c == 'U'))
        {
            printf("Vogal.");
        }
        else
        {
            printf("Consoante.");
        }
    }
    else if (isdigit(c))
    {
        printf("Digito numérico.");
    }
    else if (
        (c >= 33 && c <= 47) ||
        (c >= 58 && c <= 64) ||
        (c >= 91 && c <= 96) ||
        (c >= 123 && c <= 126))
    {
        printf("Símbolo especial.");
    }
}