#include<stdio.h>
#include<stdlib.h>

int main() {

    int x1 = 10;
    int x2 = 20;

    int *p1 = &x1;
    int *p2 = &x2;

    printf("Ponteiro 1 - valor: %d - endereço: %p \n", *p1, p1);
    printf("Ponteiro 2 - valor: %d - endereço: %p \n", *p2, p2);

    //primeira relação *p = *p
    //*p2 = *p1; //copia o valor de x1 para x2 a partir dos ponteiros

    //segunda relação p = p
    p2 = p1;

    printf("Ponteiro 1 - valor: %d - endereço: %p \n", *p1, p1);
    printf("Ponteiro 2 - valor: %d - endereço: %p \n", *p2, p2);

    


    
}