#include<iostream>

void divisores(int numero, int inicio) {

    if (inicio > numero) {
        return;
    }

    if (numero % inicio == 0) {
        std::cout << inicio << std::endl;
    }

    divisores(numero, inicio + 1);

}

int main() {

    divisores(32, 1);

}