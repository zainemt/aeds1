#include<stdio.h>
#include<string.h>

int contagemPossibilidades(int quantidade, char strings[][100]) {

    int possibilidades = 0;
    for (int i = 0 ; i < quantidade ; i++) {
        for (int j = 0 ; j < quantidade ; j++) {
            if ((i != j) && strstr(strings[i], strings[j]) != NULL) {
                possibilidades++;
            }
        }
    }
    return possibilidades;
}

int main() {

    int quantidade;
    scanf("%d", &quantidade);

    char strings[quantidade][100];
    for (int i = 0 ; i < quantidade ; i++) {
        scanf("%s", strings[i]);
    }

    int possibilidades = contagemPossibilidades(quantidade, strings);
    printf("%d", possibilidades);

}