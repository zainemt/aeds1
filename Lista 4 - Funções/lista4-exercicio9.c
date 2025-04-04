#include<stdio.h>

double fatorial(int N) {

    double total = 1;

    for (int i = N ; i > 0 ; i--) {
        total *= i;
    }

    return total;
}

int main() {

    int n;
    double total;

    printf("Insira o número do limite: ");
    scanf("%d", &n);

    total = fatorial(n);

    printf("A soma do fatorial é %g", total);

}