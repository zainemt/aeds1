#include<iostream>

int fibonacciRecursivo(int kEsimoTermo) {

    if (kEsimoTermo == 1) {
        return 0;
    }

    if (kEsimoTermo == 2) {
        return 1;
    }

    return fibonacciRecursivo(kEsimoTermo - 1) + fibonacciRecursivo(kEsimoTermo - 2);
}

int fibonacciIterativo(int kEsimoTermo) {

    int ant1 = 0;
    int ant2 = 1;
    int resultado = 0;

    for(int i = 0 ; i <= kEsimoTermo ; i++) {
        
        if (i == 1) {
            resultado = ant2;
        } else if (i == 2) {
            resultado = ant1;
        } else {
            resultado = ant1 + ant2;
            ant2 = ant1;
            ant1 = resultado;
        }

    }


    return resultado;
}

int main() {

    std::cout << fibonacciRecursivo(8) << std::endl;
    std::cout << fibonacciIterativo(8) << std::endl;

}