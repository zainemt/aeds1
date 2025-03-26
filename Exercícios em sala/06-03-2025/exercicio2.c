//faça um algoritmo que imprima os números ímpares existentes de entre 1(inclusive) e 9(inclusive)
#include<stdio.h>

int main() {

    int n = 0;

    while (n <= 9) {
        if (n % 2 != 0) {
            printf("%d \n", n);
        }
        n++;
    }
}