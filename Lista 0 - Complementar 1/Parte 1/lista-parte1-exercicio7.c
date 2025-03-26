#include<stdio.h>

int main() {

/*Linha 1*/     int a,b,c,d=1;
//Inicializa as variáveis e atribui em "d" um valor inicial (1)
//resumo da saída: a = 0, b = 0, c = 0 e d = 1

/*Linha 2*/     a = -2;
//Atribui a "a" um valor inicial (-2)
//resumo da saída: a = -2, b = 0, c = 0 e d = 1

/*Linha 3*/     b = a * a;
//Atribui a "b" um valor inicial baseado em uma operação (a * a = (-2) * (-2) = 4)
//resumo da saída: a = -2, b = 4, c = 0 e d = 1

/*Linha 4*/     c = d++;
//Atribuição do valor de "d" a "c", e após isso, "d" é incrementado.
//o incremento em "d" é feito diretamtente na variável. alterando-a
//primeiro é feito a atribuição do valor de "d" em "c" e só depois "d" é incrementado
//resumo da saída: a = -2, b = 4, c = 1 e d = 2

/*Linha 5*/     d = c++ + 5;
//Antes do incremento em "c", "d" recebe o resultado da operação, c + 5, sendo c, até então, 1, logo, d = 1 + 5 =  6
//após a atribuição em "d", é feito o incremento de "c"
//resumo da saída: a = -2, b = 4, c = 2 e d = 6

/*Linha 6*/     d = ++c + 5;
//Dessa forma, "c" é incrementado antes da operação de atribuição do valor em "d", assim, somando primeiro 1 em "c"
//após o incremento em "c", efetua-se a operação em "d", sendo assim, d = 3 + 5
//resumo da saída: a = -2, b = 4, c = 3 e d = 8

    printf("%d %d %d %d", a, b, c, d);

}