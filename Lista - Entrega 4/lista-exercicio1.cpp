#include <iostream>
using namespace std;

class Loja
{
private:
    string nome;
    string dataDeNascimento;
    string endereco;
    string telefone;

public:
    Loja() {};
    Loja(string nome, string dataDeNascimento, string endereco, string telefone)
    {
        this->nome = nome;
        this->dataDeNascimento = dataDeNascimento;
        this->endereco = endereco;
        this->telefone = telefone;
    }
    string toString() {
        return  "Nome: " + nome + "\n" +
                "Data de nascimento: " + dataDeNascimento + "\n" +
                "Endereço: " + endereco + "\n" +
                "Telefone: " + telefone + "\n"; 
    }
};

int main()
{
    int n;
    cout << "Insira a quantidade de clientes que deseja cadastrar" << endl;
    cin >> n;
    Loja * clientes[n];

    string nome;
    string dataDeNascimento;
    string endereco;
    string telefone;

    for (int i = 0; i < n; i++)
    {
        cout << "Cliente n°" << i + 1 << endl;
        cout << "Insira o nome do cliente" << endl;
        cin >> nome;
        cout << "Insira a data de nascimento do cliente" << endl;
        cin >> dataDeNascimento;
        cout << "Insira o endereço do cliente" << endl;
        cin >> endereco;
        cout << "Insira o telefone do ciente" << endl;
        cin >> telefone;
        clientes[i] = new Loja(nome, dataDeNascimento, endereco, telefone);
       }

    for (int i = 0; i < n; i++)
    {
       cout << clientes[i]->toString();
       delete clientes[i];
    }
}
