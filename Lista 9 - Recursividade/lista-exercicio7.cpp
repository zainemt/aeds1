#include<iostream>

int calcularPotencia(int numero, int potencia) {

    if (potencia == 0) {
        return 1;
    }

    int resultado = calcularPotencia(numero, potencia - 1);

    resultado *= numero;

    return resultado;
}

int main() {

    int resultado = calcularPotencia(2, 3);
    std::cout << resultado << std::endl;

}