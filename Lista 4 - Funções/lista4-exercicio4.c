#include<stdio.h>

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int n;

    printf("Insira um número inteiro: ");
    scanf("%d", &n);

    ehPar(n);

}