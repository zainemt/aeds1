#include<iostream>

int contarPossibilidade(int quantidade, std::string senhas[]) {
    int possibilidade = 0;
    for (int i = 0 ; i < quantidade ; i++) {
        for (int j = 0 ; j < quantidade ; j++) {
            if ((senhas[j].find(senhas[i]) != std::string::npos) && (j != i)) {
                possibilidade++;
            }
        }
    }
    return possibilidade;
}

int main() {

    int quantidade;
    std::cin >> quantidade;

    std::string senhas[quantidade];
    for(int i = 0 ; i < quantidade ; i++) {
        std::cin >> senhas[i];
    }
    int resultado = contarPossibilidade(quantidade, senhas);
    std::cout << resultado;
}