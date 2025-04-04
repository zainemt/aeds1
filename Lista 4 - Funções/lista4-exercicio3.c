#include<stdio.h>

int maior3(int n1, int n2, int n3) {
    if (n1 >= n2 && n1 >= n3) {
        return n1;
    } else if (n2 >= n3) {
        return n2;
    } else {
        return n3;
    }
}

int main() {

    int n1, n2, n3, maior;

    printf("Insira três número: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior = maior3(n1, n2, n3);

    printf("O maior entre os três número é %d", maior);

}