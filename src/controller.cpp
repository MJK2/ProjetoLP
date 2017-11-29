#include "../headers/controller.h"

Controller::Controller(){
    bool control = true;
    int option;

    system("clear");
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
            throw "ENTRADA INVALIDA";
        }
     }
}

void Controller::consultarCatalogo()
{
    system("clear");

    cout << "======== Consultar Catálogo ========" << endl;
    cout << "Qual catálogo deseja consultar?" << endl;
    cout << "1 - Filmes" << endl;
    cout << "2 - Documentarios" << endl;
    cout << "3 - Séries" << endl;
}

void Controller::gerenciarCatalogo()
{
    system("clear");
    
    int option;

    cout << "======== Gerenciar Catálogo ========" << endl;
    cout << "Qual catálogo deseja gerenciar?" << endl;
    cout << "1 - Filmes" << endl;
    cout << "2 - Documentarios" << endl;
    cout << "3 - Séries" << endl;

    if(cin >> option){
        if(option == 1){
            this->gerenciarFilmes();
        }else if(option == 2){
            this->gerenciarDocumentarios();
        }else if(option == 3){
            this->gerenciarSeries();
        }
    }
    
}

void Controller::gerenciarFilmes(){
    system("clear");

    cout << "======== Gerenciar Filme ========" << endl;
    cout << "O que deseja fazer?" << endl;
    cout << "1 - Adicionar" << endl;
    cout << "2 - Editar" << endl;
    cout << "3 - Excluir" << endl;
}

void Controller::gerenciarDocumentarios(){
    system("clear");

    cout << "======== Gerenciar Documentários ========" << endl;
    cout << "O que deseja fazer?" << endl;
    cout << "1 - Adicionar" << endl;
    cout << "2 - Editar" << endl;
    cout << "3 - Excluir" << endl;
}

void Controller::gerenciarSeries(){
    system("clear");

    cout << "======== Gerenciar Séries ========" << endl;
    cout << "O que deseja fazer?" << endl;
    cout << "1 - Adicionar" << endl;
    cout << "2 - Editar" << endl;
    cout << "3 - Excluir" << endl;
}