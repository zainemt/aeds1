#include<stdio.h>

int main() {

    int horaInicio, horaFinal, minutosInicio, minutosFim, duracaoHoras, duracaoMinutos;

    printf("Insira a hora e os minutos de início do jogo: ");
    scanf("%d %d", &horaInicio, &minutosInicio);

    
    printf("Insira a hora e os minutos do fim do jogo: ");
    scanf("%d %d", &horaFinal, &minutosFim);

    if (horaInicio > horaFinal) {
        duracaoHoras = (24 - horaInicio) + horaFinal;
    } else {
        duracaoHoras = horaFinal - horaInicio;
    }

    if (minutosInicio > minutosFim) {
        duracaoMinutos = (60 - minutosInicio) + minutosFim;
    } else {
        duracaoMinutos = minutosFim - minutosInicio;
    }

    if (duracaoMinutos == 60) {
        duracaoMinutos = 0;
        duracaoHoras = duracaoHoras + 1;
    }

    printf("O jogo durou %d hora(s) e %d minuto(s)", duracaoHoras, duracaoMinutos);

    
}