#include<iostream>
#include<cmath>
const int TOTAL_NOTAS = 5;

int somaDasNotas(int notas[])
{
    int total = 0;
    for (int i = 0; i < TOTAL_NOTAS; i++)
    {
        total += notas[i];    
    }
    return total;
}

double media(int soma, int quantidade) {
    return soma / quantidade;
}

int main()
{

    int notas[TOTAL_NOTAS];

    for (int i = 0; i < TOTAL_NOTAS; i++)
    {
        std::cin >> notas[i];
    }

    int soma = somaDasNotas(notas);
    double mediaNotas = std::ceil(media(soma, TOTAL_NOTAS));

    std::cout << soma << std::endl;
    std::cout << mediaNotas << std::endl;
}