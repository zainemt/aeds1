#include<stdio.h>
#include<math.h>

float calculaMedia(int x, int y, int z, int operacao) {

    switch (operacao) {
    case 1:
        return cbrt((x * y * z));
    break;

    case 2:
        return ((x + 2 * y + 3 * z) / 6);
    break;

    case 3:
        return 3 / ((1 / x) + (1 / y) + (1 / z));
    break;

    case 4:
        return (x + y + z) / 3;
    break;
    
    default:
        return 0;
    break;
    }
}

int main() {

    int x, y, z, operacao;
    float media;

    printf("Insira três números positivos: ");
    scanf("%d %d %d", &x, &y, &z);
    
    printf("Insira o número referente a operação: \n");
    printf("(1). Geométrica \n");
    printf("(2). Ponderada \n");
    printf("(3). Harmônica \n");
    printf("(4). Aritmética \n");
    scanf("%d", &operacao);

    media = calculaMedia(x, y, z, operacao);

    printf("O valor da média é %.2f", media);
}