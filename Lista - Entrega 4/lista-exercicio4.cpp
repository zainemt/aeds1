#include <vector>
#include <iostream>
using namespace std;

class Animal
{

protected:
    string nome;
    string raca;
    int idade;
    double preco;

public:
    Animal(string nome, string raca, int idade, double preco)
    {
        this->nome = nome;
        this->raca = raca;
        this->idade = idade;
        this->preco = preco;
    }
    string getNome()
    {
        return this->nome;
    }
    string getRaca()
    {
        return this->raca;
    }
    int getIdade()
    {
        return this->idade;
    }
    double getPreco()
    {
        return this->preco;
    }
    void setNome(string nome)
    {
        this->nome = nome;
    }
    void setRaca(string raca)
    {
        this->raca = raca;
    }
    void setIdade(int idade)
    {
        this->idade = idade;
    }
    void setPreco(double preco)
    {
        this->preco = preco;
    }
    virtual void toString() {}
};

class Cachorro : public Animal
{
public:
    Cachorro(string nome, string raca, int idade, double preco) : Animal(nome, raca, idade, preco) {}

    void toString() override
    {
        cout << "Cachorro - Nome: " << nome << ", Raça: " << raca
             << ", Idade: " << idade << " anos, Preço: R$ " << preco << endl;
    }
};

class Gato : public Animal
{
public:
    Gato(string nome, string raca, int idade, double preco) : Animal(nome, raca, idade, preco) {}

    void toString() override
    {
        cout << "Gato - Nome: " << nome << ", Raça: " << raca
             << ", Idade: " << idade << " anos, Preço: R$ " << preco << endl;
    }
};

class Loja
{
private:
    int totalAnimais;
    Animal *animais[100];

public:
    Loja()
    {
        this->totalAnimais = 0;
    }
    void adicionarAnimal(Animal *animal)
    {
        animais[totalAnimais++] = animal;
        cout << "Animal adicionado" << endl;
    }

    void listarAnimais() const
    {
        for (int i = 0; i < totalAnimais; i++)
        {
            animais[i]->toString();
        }
    }

    void atualizarAnimal(string nome)
    {
        for (int i = 0; i < totalAnimais; i++)
        {
            if (animais[i]->getNome() == nome)
            {
                string novaRaca;
                int novaIdade;
                double novoPreco;

                cout << "Nova raça: ";
                cin >> novaRaca;
                cout << "Nova idade: ";
                cin >> novaIdade;
                cout << "Novo preço: ";
                cin >> novoPreco;

                animais[i]->setRaca(novaRaca);
                animais[i]->setIdade(novaIdade);
                animais[i]->setPreco(novoPreco);

                cout << "Animal atualizado com sucesso!\n";
                return;
            }
        }
        cout << "Animal não encontrado.\n";
    }

    void removerAnimal(string nome)
    {
        for (int i = 0; i < totalAnimais; i++)
        {
            if (animais[i]->getNome() == nome)
            {
                for (int j = i; j < totalAnimais - 1; j++)
                {
                    animais[j] = animais[j + 1];
                }
                totalAnimais--;
                break;
            }
        }
        cout << "Animal não encontrado.\n";
    }
};

int main()
{
    Loja loja;
    int opcao;

    do
    {
        cout << "(1). Adicionar cachorro" << "\n" <<
                "(2). Adicionar gato" << "\n" <<
                "(3). Listar animais" << "\n" <<
                "(4). Atualizar animal" << "\n" <<
                "(5). Remover animal" << "\n" <<
                "(0). Sair" << "\n";
        
        cin >> opcao;

        string nome, raca;
        int idade;
        double preco;

        switch (opcao)
        {
        case 1:
            cout << "Nome: ";
            cin >> nome;
            cout << "Raça: ";
            cin >> raca;
            cout << "Idade: ";
            cin >> idade;
            cout << "Preço: ";
            cin >> preco;
            loja.adicionarAnimal(new Cachorro(nome, raca, idade, preco));
            break;

        case 2:
            cout << "Nome: ";
            cin >> nome;
            cout << "Raça: ";
            cin >> raca;
            cout << "Idade: ";
            cin >> idade;
            cout << "Preço: ";
            cin >> preco;
            loja.adicionarAnimal(new Gato(nome, raca, idade, preco));
            break;

        case 3:
            loja.listarAnimais();
            break;

        case 4:
            cout << "Nome do animal para atualizar: ";
            cin >> nome;
            loja.atualizarAnimal(nome);
            break;

        case 5:
            cout << "Nome do animal para remover: ";
            cin >> nome;
            loja.removerAnimal(nome);
            break;

        case 0:
            cout << "Saindo...\n";
            break;

        default:
            cout << "Opção inválida.\n";
        }

    } while (opcao != 0);

    return 0;
}
