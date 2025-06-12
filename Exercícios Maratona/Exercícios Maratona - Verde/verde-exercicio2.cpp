#include <iostream>
#include <string>

int verificarEconomia(int quantidade, std::string numeros[])
{

    int contador = 0;
    for (int i = 1; i < quantidade; i++)
    {
        for (int j = 0; j < numeros[0].length(); j++)
        {
            if ((numeros[i - 1][j] == numeros[i][j]))
            {
                if ((j == 0) || (numeros[i - 1][j - 1] == numeros[i][j - 1]))
                {
                    contador++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    return contador;
}

int main()
{
    int quantidade;
    int economia;

    while (std::cin >> quantidade)
    {
        std::string numeros[quantidade];
        for (int i = 0; i < quantidade; i++)
        {
            std::cin >> numeros[i];
        }
        economia = verificarEconomia(quantidade, numeros);
        std::cout << economia << std::endl;
    }
}