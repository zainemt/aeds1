#include <iostream>
using namespace std;

class View
{
public:
    void menuPrincipal()
    {
        cout << "Escolha uma das opções abaixo: \n";
        cout << "(1). Cadastrar Local \n";
        cout << "(2). Consultar Local \n";
        cout << "(3). Excluir Local \n";
        cout << "(4). Atualizar Local \n";
    }
};