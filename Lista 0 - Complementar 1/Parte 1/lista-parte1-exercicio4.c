#include<stdio.h>

int main() {

    float municipios, votosBrancos, votosNulos, votosValidos;

    printf("Insira a quantidade de eleitores: ");
    scanf("%f", &municipios);

    printf("Insira a quantidade de votos brancos: ");
    scanf("%f", &votosBrancos);

    printf("Insira a quantidade de votos nulos: ");
    scanf("%f", &votosNulos);

    printf("Insira a quantidade de votos válidos: ");
    scanf("%f", &votosValidos);

    votosBrancos = ((votosBrancos / municipios) * 100);
    votosNulos = ((votosNulos / municipios) * 100);
    votosValidos = ((votosValidos / municipios) * 100);

    printf("O percentual de votos brancos é: %.0f%% \n", votosBrancos);
    printf("O percentual de votos nulos é: %.0f%% \n", votosNulos);
    printf("O percentual de votos válidos é: %.0f%% \n", votosValidos);
    
}