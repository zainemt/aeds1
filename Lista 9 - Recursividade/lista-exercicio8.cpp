#include<iostream>

int fatorial(int numero) {

    if (numero == 0) {
        return 1;
    }

    int resultado = fatorial(numero - 1);

    resultado *= numero;

    return resultado;
}

int main() {

    int numero;
    std::cin >> numero;
    int resultado = fatorial(numero);
    std::cout << resultado << std::endl;

}