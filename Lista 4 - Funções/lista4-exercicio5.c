#include<stdio.h>

int ehDivisivelPor3ou5(int n) {

    if (n % 3 == 0 || n % 5 == 0 && !(n % 3 == 0 && n % 5 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int n;

    printf("Insira um número: ");
    scanf("%d", &n);

    ehDivisivelPor3ou5(n);

}