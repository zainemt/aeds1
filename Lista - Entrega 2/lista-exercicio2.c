#include <stdio.h>

void preencheNotas(int tamanho, int vetor[]) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void calculaMedia(int tamanho, int vetor[]) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    float media = (soma / tamanho);
    int acimaDaMedia = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > media) {
            acimaDaMedia++;
        }
    }

    printf("Média da turma: %.2f \n", media);
    printf("Quantidade de alunos com nota acima da média: %d \n", acimaDaMedia);
}

int main() {
    int notas[10];

    preencheNotas(10, notas);
    calculaMedia(10, notas);

    return 0;
}
