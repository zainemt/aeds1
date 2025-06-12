#include <iostream>
#include <iomanip>
#define ACIMA_100FOLHAS 0.20
#define ABAIXO_100FOLHAS 0.25

double totalAPagar(int folhas)
{
    if (folhas <= 0)
    {
        return 0;
    }
    else if (folhas > 100)
    {
        return folhas * ACIMA_100FOLHAS;
    }
    else
    {
        return folhas * ABAIXO_100FOLHAS;
    }
}

int main()
{

    int folhas;
    std::cin >> folhas;
    
    double total = totalAPagar(folhas);
    std::cout << std::fixed << std::setprecision(2) << total << std::endl;

}