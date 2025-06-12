#include<iostream>

int calcularIdade(int monica, int filho1, int filho2) {
    return (monica - (filho1 + filho2));
}

int maisVelho(int monica, int filho1, int filho2) {
    int resultado = calcularIdade(monica, filho1, filho2);

    if (filho1 > filho2 && filho1 > resultado) {
        return filho1;
    } else if (filho2 > resultado) {
        return filho2;
    } else {
        return resultado;
    }
}

int main() {

    int monica, filho1, filho2, resultado;

    std::cin >> monica;
    std::cin >> filho1;
    std::cin >> filho2;

    resultado = maisVelho(monica, filho1, filho2);
    std::cout << resultado << std::endl;
}