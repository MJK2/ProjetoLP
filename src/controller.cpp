#include "../headers/controller.h"
#include <fstream>

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

Controller::~Controller(){
    ofstream filmes;
    filmes.open ("data/filmes.dat");
    for (auto it(this->filmes.begin()); it != this->filmes.end(); it++){
        filmes << it->writeFilme() << endl;
    }
    filmes.close();
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
    int option;

    cout << "======== Gerenciar Filme ========" << endl;
    cout << "O que deseja fazer?" << endl;
    cout << "1 - Adicionar" << endl;
    cout << "2 - Editar" << endl;
    cout << "3 - Excluir" << endl;

    if(cin >> option){
        if(option == 1){
            this->adicionarFilme();
        }
    }
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

vector<string> Controller::adicionarCategorias(){
    vector<string> categorias;
    string cat;
    
    cout << "Digite uma categoria por vez (digite 'fim' para indicar que já adicionou todas)" << endl;
    while(cin >> cat && cat != "fim"){
        categorias.push_back(cat);
    }

    return categorias;
}

vector<string> Controller::adicionarElenco(){
    vector<string> elenco;
    string ator;
    
    cout << "Digite um ator por vez (digite 'fim' para indicar que já adicionou todas)" << endl;
    while(cin >> ator && ator != "fim"){
        elenco.push_back(ator);
    }

    return elenco;
}


void Controller::adicionarFilme(){
    system("clear");

    string nome;
    string descricao;
    string duracao;
    Date data_lancamento;
    vector<string> categorias; 
    string diretor;
    vector<string> elenco;

    cout << "======== Adicionar Filme ========" << endl;
    cout << "Título do filme: " << endl;
    cin >> nome;
    cout << "Descricao: " << endl;
    cin >> descricao;
    cout << "Duração: " << endl;
    cin >> duracao;
    cout << "Categorias do filme: " << endl;
    categorias = this->adicionarCategorias();
    cout << "Nome do diretor: " << endl;
    cin >> diretor;
    cout << "Elenco: " << endl;
    elenco = this->adicionarElenco();

    Filme filme(nome,
                descricao,
                duracao,
                data_lancamento,
                categorias,
                diretor,
                elenco);
    
    this->filmes.push_back(filme);

    cout << "Filme adicionado com sucesso!" << endl;
}