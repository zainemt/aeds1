#include <iostream>
using namespace std;

void reversa(std::string string, int tamanho, int aux) {
    if (aux == tamanho) {
        return;
    }
    reversa(string, tamanho, aux + 1);
    cout << string[aux];

}

int main() {

    std::string string = "Ola mundo";
    reversa(string, string.length(), 0);

}