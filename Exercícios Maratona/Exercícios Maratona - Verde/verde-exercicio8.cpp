#include<iostream>

void verificarDivisores(int numero) {

    if (numero % 3 == 0 && numero % 5 == 0 ) {
        std::cout << "Divisível por ambos" << std::endl;
    } else if (numero % 3 == 0) {
        std::cout << "Divisível por 3" << std::endl;
    } else if (numero % 5 == 0) {
        std::cout << "Divisível por 5" << std::endl;
    } else {
        std::cout << "Não é divisível por 3 nem por 5" << std::endl;
    }
}

int main() {

    int numero;

    while (std::cin >> numero)
    {
        verificarDivisores(numero);
    }
    
}