#include<stdio.h>

int main() {

    int n = 15;

    for (int i = 1 ; i <= n ; i *= 2) {
        if (i % 2 == 0) {
            printf("Olá \n");
        }
    }

}

/*
    loop 1 -> i = 1 -> 1 % 2 == 1 -> "Olá" count = 0
    loop 2 -> i = 1 * 2 = 2 -> 2 % 2 == 0 -> "Olá" count = 1
    loop 3 -> i = 2 * 2 = 4 -> 4 % 2 == 0 -> "Olá" count = 2
    loop 4 -> i = 4 * 2 = 8 -> 8 % 2 == 0 -> "Olá" count = 3

    encerrado por: 8 * 2 > n

    número de prints = 3

*/
