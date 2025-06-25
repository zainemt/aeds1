#include<iostream>

void verificar(int numero) {
    if (numero % 2 == 0) {
        std::cout << "Par" << std::endl;
    } else {
        std::cout << "impar" << std::endl;
    }
}

int main() {

    int numero;
    std::cin >> numero;

    verificar(numero);
}