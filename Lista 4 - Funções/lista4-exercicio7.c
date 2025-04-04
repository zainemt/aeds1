#include<stdio.h>

float calculoPesoIdeal(float h, char sexo) {

    if (sexo == 'F') {
        return ((62.1 * h) - 44.7); 
    } else {
        return ((72.7 * h) - 58);
    }
}

void diferencaNoPeso(float peso, float pesoIdeal) {
    if (peso > pesoIdeal) {
        printf("O peso a perder é %.2f", (peso - pesoIdeal));
    } else {
        printf("O peso a ganhar é %.2f", (pesoIdeal - peso));
    }
}

int main() {

    float altura, peso;
    char sexo;

    printf("Insira uma altura: ");
    scanf("%f", &altura);
    printf("Insira o peso: ");
    scanf("%f", &peso);
    fflush(stdin);
    printf("Insira o sexo: ");
    scanf("%c", &sexo);

    diferencaNoPeso(peso, calculoPesoIdeal(altura, sexo));
}