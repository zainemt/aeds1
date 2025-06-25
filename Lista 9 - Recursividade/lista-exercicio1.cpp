#include <iostream>
using namespace std;

void escreverNaTela(int numero)
{
    if (numero == 0) {
        return;
    }
    escreverNaTela(numero - 1);
    cout << numero << ", ";
}

int main()
{

    escreverNaTela(5);
}