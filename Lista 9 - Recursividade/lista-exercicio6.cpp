#include<iostream>

void divisores(int numero1, int numero2 ,int inicio) {

    if (inicio > numero1 || inicio > numero2) {
        return;
    }

    if (numero1 % inicio == 0 && numero2 % inicio == 0) {
        std::cout << inicio << std::endl;
    }

    divisores(numero1, numero2, inicio + 1);

}

int main() {

    divisores(18, 24, 1);

}