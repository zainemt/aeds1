#include<iostream>
using namespace std;
#include<exception>
#include<cstdlib>

class ContaCorrente {
    protected:
        string nome;
        string sobrenome;
        double saldo;
    public:
        ContaCorrente(string nome, string sobrenome, double saldo) {
            if (saldo <= 0) {
                throw runtime_error("saldo inicial inválida.");
            }
            this->nome = nome;
            this->sobrenome = sobrenome;
            this->saldo = saldo;
        }
        ContaCorrente(string nome, string sobrenome) {
            this->nome = nome;
            this->sobrenome = sobrenome;
            this->saldo = 0.0;
        }
        ContaCorrente() {}
        virtual void saque(double valor) {
            if (saldo - (valor + (valor * 0.05)) < 0) {
                throw runtime_error("Conta com saldo insuficiente.");
            } else {
                this->saldo -= (valor * 0.05);
                cout << "Saque realizado. " << endl;
            }
        }
        void deposito(double quantia) {
            if (quantia <= 0) {
                throw runtime_error("Valor a ser depositado é inválido.");
            }
            this->saldo += quantia;
        }
        double getSaldo() {
            return this->saldo;
        }
        string getNome() {
            return this->nome;
        }
        string toString() const {
            return "Titular: " + nome + " " + sobrenome + "\nSaldo: R$ " + to_string(saldo);
        }
};

class ContaEspecial : public ContaCorrente {
    public:
        ContaEspecial(string nome, string sobrenome, double saldo) : ContaCorrente(nome, sobrenome, saldo) {}
        ContaEspecial(string nome, string sobrenome) : ContaCorrente(nome, sobrenome) {}

        void saque(double valor) override {
            if (saldo - (valor + (valor * 0.01)) < 0) {
                throw runtime_error("Conta com saldo insuficiente.");
            } else {
                saldo -= (valor * 0,01);
                cout << "Saque realizado. " << endl;
            }
        }
};

int main() {

    int opcao;
    char opcaoSaldo;
    string nome;
    string sobrenome;
    double quantia;

    ContaCorrente* contas[100];
    int totalContas = 0;

    do {
        cout << "Escolha uma opção: \n" <<
            "(1). Criar conta corrente. \n" <<
            "(2). Criar conta especial. \n" <<
            "(3). Realizar operações. \n" <<
            "(4). Sair. \n";
        cin >> opcao;
        system("cls");

        switch(opcao) {
            
            case 1:
                cout << "Insira o nome: ";
                cin >> nome;
                cout << "Insira o sobrenome: ";
                cin >> sobrenome;
                cout << "Deseja realizar um saldo inicial? (S/N) ";
                cin >> opcaoSaldo;
                if (opcaoSaldo == 'S' || opcaoSaldo == 's') {
                    cout << "Insira a quantia inicial: ";
                    cin >> quantia;
                    contas[totalContas++] = new ContaCorrente(nome, sobrenome, quantia);
                } else {
                    contas[totalContas++] = new ContaCorrente(nome, sobrenome);
                }
                cout << "Conta criada com sucesso. Número da conta: " << totalContas - 1 << endl;
            break;

            case 2: 
                cout << "Insira o nome: ";
                cin >> nome;
                cout << "Insira o sobrenome: ";
                cin >> sobrenome;
                cout << "Deseja realizar um saldo inicial? (S/N) ";
                cin >> opcaoSaldo;

                if (opcaoSaldo == 'S' || opcaoSaldo == 's') {
                    cout << "Insira a quantia inicial: ";
                    cin >> quantia;
                    contas[totalContas++] = new ContaEspecial(nome, sobrenome, quantia);
                } else {
                    contas[totalContas++] = new ContaEspecial(nome, sobrenome);
                }

                cout << "Conta criada com sucesso. Número da conta: " << totalContas - 1 << endl;
            break;
            
            case 3:
                int operacao;
                int conta;
                do {

                    if (totalContas == 0) {
                    cout << "Não há contas cadastradas." << endl;
                    break;
                    }
                    cout << "Selecione uma conta para operar: " << endl;
                    for (int i = 0 ; i < totalContas ; i++) {
                        cout << "Número da conta: " << i << ", Nome: " << contas[i]->getNome() << endl;
                    }
                    cin >> conta;
                    system("cls");
                    cout << "Selecione a operação: " <<
                            "\nOPERAÇÕES NA CONTA: " << conta << "\n" <<
                            "(1). Depositar. \n" <<
                            "(2). Sacar. \n" <<
                            "(3). Ver saldo. \n" <<
                            "(4). Voltar. \n";
                    cin >> operacao;
                    system("cls");
                    switch (operacao) {
                        case 1:
                            cout << "Valor a depositar: ";
                            cin >> quantia;
                            contas[conta]->deposito(quantia);
                            cout << "Depósito realizado.\n";
                        break;
                        case 2:
                            cout << "Valor a sacar: ";
                            cin >> quantia;
                            contas[conta]->saque(quantia);
                            cout << "Saque realizado.\n";
                        break;
                        case 3:
                            cout << "Saldo atual: R$ " << contas[conta]->getSaldo() << endl;
                        break;
                        default: cout << "Opção inválida." << endl; break;  
                    }
                    
                } while (operacao != 4);
            break;
            default: cout << "Opção inválida." << endl; break;
        }
        system("cls");
    } while (opcao != 4);
    
}
