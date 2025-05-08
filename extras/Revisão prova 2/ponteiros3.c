#include<stdio.h>
#include<stdlib.h>

int main() {

    int* p = (int*) malloc(sizeof(int));
    *p = 20;

    printf("Antes do realloc - %d \n", *p);

    int *p2 = p;

    p2 = (int*) realloc(p2, 2 * sizeof(int));
    if(p2 == NULL) {
        free(p);
        return 1;
    }

    printf("Após o realloc - %d \n", *p);
    printf("Vetor em 0 - %d \n", p2[0]);
    printf("Vetor em 1 - %d \n", p2[1]);
}