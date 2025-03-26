#include<stdio.h>
#include<math.h>

int main() {

    int X1, X2, Y1, Y2;
    float distanciaEuclidiana;

    printf("Insira o primeiro par ordenado (X Y): ");
    scanf("%d %d", &X1, &Y1);

    printf("Insira o segundo par ordenado (X Y): ");
    scanf("%d %d", &X2, &Y2);

    distanciaEuclidiana = sqrt((pow((X2 - X1), 2) + pow((Y2 - Y1), 2)));

    printf("A distância euclidiana é: %.2f", distanciaEuclidiana);
}