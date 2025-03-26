#include<stdio.h>

int main() {

    int numero;

    printf("Insira um número: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Contagem indisponível, número igual ou menor que 0.");
        return 0;
    }

    while (numero >= 0) {
        printf("%d\n", numero);
        numero--;
    }

    return 0;
}