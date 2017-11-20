#include "../headers/controller.h"

Controller::Controller(){
    bool control = true;
    int option;

    cout << "======== Catálogo de vídeos ========" << endl;
    cout << "Aperte o botão da ação desejada: " << endl;
    cout << "1 - Consultar catálogo" << endl;
    cout << "2 - Gerenciar catálogo" << endl;

    while (control)
    {
        if (cin >> option)
        {
            if (option == 1)
            {
                control = false;
                this->consultarCatalogo();
            }
            else if (option == 2)
            {
                control = false;
                this->gerenciarCatalogo();
            }
            else
            {
                cout << "Digite um número válido." << endl;
            }
        }
        else
        {
            cout << "Digite uma opção válida." << endl;
        }
    }
}

void Controller::consultarCatalogo()
{
    cout << "Consultar Catálogo" << endl;
}

void Controller::gerenciarCatalogo()
{
    cout << "Gerenciar Catálogo" << endl;
}