#include<stdio.h>

int somaNumerosDiv3ou5(int N) {

    int total = 0;

    for (int i = 0 ; i <= N ; i++) {
        if (i >= 0 && (i % 3 == 0 || i % 5 == 0) && !(i % 3 == 0 && i % 5 == 0)) {
            total += i;
        }
    }
    return total;
}

int main() {

    int n, total;

    printf("Insira o número limite: ");
    scanf("%d", &n);

    total = somaNumerosDiv3ou5(n);

    printf("A soma dos número divisiveis por 3 ou por 5 até 20 é %d", total);

}