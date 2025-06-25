#include <iostream>
#include <string>
#include <cctype>

int verificarLinha(std::string linha, int posicao, std::string recorrente)
{
    int recorrencia = linha.find(recorrente, posicao);

    if (recorrencia != std::string::npos)
    {
        return 1 + verificarLinha(linha, recorrencia + recorrente.length(), recorrente);
    }

    return 0;
}

std::string paraMinusculo(std::string linha)
{
    for (int i = 0; i < linha.length(); i++)
    {
        linha[i] = std::tolower(linha[i]);
    }
    return linha;
}

int recorrencia(std::string strings[], int tamanho, std::string recorrente)
{

    int contador = 0;
    int posicao;
    for (int i = 0; i < tamanho; i++)
    {
        contador += verificarLinha(paraMinusculo(strings[i]), 0, recorrente);
    }
    return contador;
}

int main()
{

    int tamanho;
    std::string recorrente;

    std::cin >> tamanho;
    std::cin >> recorrente;

    std::cin.ignore();
    std::string strings[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        std::getline(std::cin, strings[i]);
    }

    int contagem = recorrencia(strings, tamanho, recorrente);
    std::cout << contagem << std::endl;
}