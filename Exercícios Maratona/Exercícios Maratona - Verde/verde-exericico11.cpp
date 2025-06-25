#include <iostream>
using namespace std;

void imprimirPascal(int tamanho)
{
    int pascal[tamanho][tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];

            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int tamanho;
    std::cin >> tamanho;
    imprimirPascal(tamanho);
}