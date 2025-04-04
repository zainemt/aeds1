#include<stdio.h>

float pesoIdeal(float h, char sexo) {

    if (sexo == 'F') {
        return ((62.1 * h) - 44.7); 
    } else {
        return ((72.7 * h) - 58);
    }

}

int main() {

    float altura, peso;
    char sexo;

    printf("Insira uma altura: ");
    scanf("%f", &altura);
    fflush(stdin);
    printf("Insira o sexo: ");
    scanf("%c", &sexo);

    peso = pesoIdeal(altura, sexo);

    printf("O peso ideal é %.2f", peso);
}