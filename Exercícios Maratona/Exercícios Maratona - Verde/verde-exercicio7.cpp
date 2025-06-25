#include<iostream>
#include<string>

std::string maiorString(std::string strings[], int tamanho) {

    std::string maior = strings[0];

    for (int i = 0 ; i < tamanho ; i++) {
        if (strings[i].length() > maior.length()) {
            maior = strings[i];
        }
    }

    return maior;
}

std::string maiorLexicografia(std::string strings[], int tamanho) {

    std::string maior = strings[0];

    for (int i = 0 ; i < tamanho ; i++) {
        if (strings[i] > maior) {
            maior = strings[i];
        }
    }

    return maior;
}

int main() {

    int tamanho;
    std::cin >> tamanho;
    std::cin.ignore();
    std::string strings[tamanho];

    for (int i = 0 ; i < tamanho ; i++) {
        std::getline(std::cin, strings[i]);
    }

    std::string maiorTamanho = maiorString(strings, tamanho);
    std::cout << maiorTamanho << std::endl;
    std::string maiorLexicograficamente = maiorLexicografia(strings, tamanho);
    std::cout << maiorLexicograficamente << std::endl;

}