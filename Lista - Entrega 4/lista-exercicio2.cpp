#include <iostream>
using namespace std;

class Loja
{
private:
    string nomeLoja;
    string telefone;
    double preco;

public:
    Loja(string nome, string telefone, double preco)
    {
        this->nomeLoja = nome;
        this->telefone = telefone;
        this->preco = preco;
    }

    string toString()
    {
        return "Nome da loja: " + nomeLoja + "\n" +
               "Telefone: " + telefone + "\n" +
               "Preço: " + to_string(preco) + "\n";
    }

    double getPreco()
    {
        return preco;
    }
    void setPreco(double preco)
    {
        this->preco = preco;
    }
    string getNome()
    {
        return nomeLoja;
    }
    void setNome(string nome)
    {
        this->nomeLoja = nome;
    }
    string getTelefone()
    {
        return telefone;
    }
    void setTelefone(string telefone)
    {
        this->telefone = telefone;
    }
};

double mediaDosValores(Loja *lojas[], int quantidade)
{
    double total = 0;
    for (int i = 0; i < quantidade; i++)
    {
        total += lojas[i]->getPreco();
    }
    return (total / quantidade);
}

double menorValor(Loja *lojas[], int quantidade)
{
    double menorValor = lojas[0]->getPreco();
    for (int i = 0; i < quantidade; i++)
    {
        if (lojas[i]->getPreco() < menorValor)
        {
            menorValor = lojas[i]->getPreco();
        }
    }
    return menorValor;
}

double maiorValor(Loja *lojas[], int quantidade)
{
    double maiorValor = lojas[0]->getPreco();
    for (int i = 0; i < quantidade; i++)
    {
        if (lojas[i]->getPreco() > maiorValor)
        {
            maiorValor = lojas[i]->getPreco();
        }
    }
    return maiorValor;
}

int main()
{
    Loja *lojas[10];

    string nomeLoja;
    string telefone;
    double preco;

    for (int i = 0; i < 10; i++)
    {
        cout << "Cliente n°" << i + 1 << endl;

        cout << "Insira o nome da loja: " << endl;
        cin >> nomeLoja;
        cout << "Insira o telefone da loja: " << endl;
        cin >> telefone;
        cout << "Insira o preço do alimento: " << endl;
        cin >> preco;

        lojas[i] = new Loja(nomeLoja, telefone, preco);
    }

    cout << "Menor valor: " << menorValor(lojas, 10) << endl;
    cout << "Maior valor: " << maiorValor(lojas, 10) << endl;
    cout << "Média dos valores: " << mediaDosValores(lojas, 10) << endl;

    for (int i = 0; i < 10; i++)
    {
        delete lojas[i];
    }
}