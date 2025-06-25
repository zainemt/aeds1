#include <iostream>
#include <string>

char verificarPalindromo(std::string palavra1, std::string palavra2)
{
    std::string string1 = palavra1;
    std::string string2 = palavra2;
    int contador = 0, contadorAsteriscos = 0;

    for (char c : string2) {
        if (c == '*') contadorAsteriscos++;
    }

    for (int i = 0; i < string1.length(); i++)
    {
        for (int j = 0; j < string2.length(); j++)
        {
            if (string1[i] == string2[j])
            {
                contador++;
                string2.erase(j, 1);
                break;
            }
        }
    }

    if ((contador + contadorAsteriscos) == palavra1.length())
    {
        return 'S';
    }
    else
    {
        return 'N';
    }
}

int main()
{

    std::string string1, string2;
    std::cin >> string1;
    std::cin >> string2;

    char resultado = verificarPalindromo(string1, string2);
    std::cout << resultado << std::endl;
}