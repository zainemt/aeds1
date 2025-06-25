#include<iostream>
#include<string>

bool verificarPalindromo(std::string string, int inicio, int fim)
{

    if (inicio >= fim) {
        return true;
    }

    if (string[inicio] != string[fim]) {
        return false;
    }

    return verificarPalindromo(string, inicio + 1, fim - 1);

}

int main()
{
    std::string palavra = "radar";

    if (verificarPalindromo(palavra, 0, palavra.length() - 1)) {
        std::cout << "É um palindromo";
    } else {
        std::cout << "Não é um palindromo";
    }
}