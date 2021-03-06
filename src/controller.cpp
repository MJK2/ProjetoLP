#include "../headers/controller.h"
#include <fstream>

Controller::Controller(){
    string line;

    ifstream filmes;
    filmes.open("data/filmes.dat");
    if (filmes.is_open())
    {
        while (getline(filmes, line))
        {
            this->filmes.push_back(this->stringToFilme(line));
        }
        filmes.close();
    }

    ifstream documentarios;
    documentarios.open("data/documentarios.dat");
    if (documentarios.is_open())
    {
        while (getline(documentarios, line))
        {
            this->documentarios.push_back(this->stringToDocumentario(line));
        }
        documentarios.close();
    }

    this->menuInicial();
}

void Controller::menuInicial(){
    system("clear");
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
            throw "ENTRADA INVALIDA";
        }
     }
}


Controller::~Controller(){
    this->saveData();
}

void Controller::saveData(){
    ofstream filmes;
    filmes.open ("data/filmes.dat");
    for (auto it(this->filmes.begin()); it != this->filmes.end(); it++){
        filmes << it->writeFilme() << endl;
    }
    filmes.close();

    ofstream documentarios;
    filmes.open("data/documentarios.dat");
    for (auto it(this->documentarios.begin()); it != this->documentarios.end(); it++)
    {
        filmes << it->writeDocumentario() << endl;
    }
    filmes.close();
}

Filme Controller::stringToFilme(string line){
    int pipe_counter = 0;
    string data;
    vector<string> params;
    vector<string> categoria;
    vector<string> elenco;

    for (size_t i = 0; i != line.length(); i++)
    {
        if (line[i] != ' ' && line[i] != '|')
        {
            data += line[i];
        }
        else if (line[i] == ' ')
        {
            params.push_back(data);
            data = "";
        }
        else if (line[i] == '|')
        {
            pipe_counter++;
            i++;
            while (line[i] != '|')
            {
                if (line[i] != ' ' && line[i] != '|')
                {
                    data += line[i];
                }
                else if(line[i] == ' ')
                {
                    if (pipe_counter < 3)
                    {
                        categoria.push_back(data);
                    }
                    else
                    {
                        elenco.push_back(data);
                    }

                    data = "";
                }

                i++;
            }
        }
    }

    Filme filme(params[0],
                params[1],
                params[2],
                params[3],
                categoria,
                params[4],
                elenco);
    
    return filme;
}

Documentario Controller::stringToDocumentario(string line)
{
    string data;
    vector<string> params;
    vector<string> categoria;

    for (size_t i = 0; i != line.length(); i++)
    {
        if (line[i] != ' ' && line[i] != '|')
        {
            data += line[i];
        }
        else if (line[i] == ' ')
        {
            params.push_back(data);
            data = "";
        }
        else if (line[i] == '|')
        {
            i++;
            while (line[i] != '|')
            {
                if (line[i] != ' ' && line[i] != '|')
                {
                    data += line[i];
                }
                else if (line[i] == ' ')
                {
                    categoria.push_back(data);
                    data = "";
                }

                i++;
            }
        }
    }

    Documentario documentario(params[0],
                              params[1],
                              params[2],
                              categoria,
                              params[3],
                              params[4]);

    return documentario;
}

void Controller::consultarCatalogo()
{
    system("clear");
    string option;

    cout << "======== Consultar Catálogo ========" << endl;
    cout << "Qual catálogo deseja consultar?" << endl;
    cout << "1 - Filmes" << endl;
    cout << "2 - Documentarios" << endl;

    if (cin >> option){
        if (option == "1")
        {
            this->listarFilmes();
        }
        else if (option == "2")
        {
            this->listarDocumentarios();
        }
        else if(option == "back"){
            this->menuInicial();
        }
        else if(option == "exit"){
            this->saveData();
        }
    }
}

void Controller::gerenciarCatalogo()
{
    system("clear");
    
    string option;

    cout << "======== Gerenciar Catálogo ========" << endl;
    cout << "Qual catálogo deseja gerenciar?" << endl;
    cout << "1 - Filmes" << endl;
    cout << "2 - Documentarios" << endl;

    if(cin >> option){
        if(option == "1"){
            this->gerenciarFilmes();
        }else if(option == "2"){
            this->gerenciarDocumentarios();
        }else if(option == "back"){
            this->menuInicial();
        }else if (option == "exit"){
            this->saveData();
        }
    }
    
}

void Controller::gerenciarFilmes(){
    system("clear");
    string option;

    cout << "======== Gerenciar Filme ========" << endl;
    cout << "O que deseja fazer?" << endl;
    cout << "1 - Adicionar" << endl;
    cout << "2 - Editar" << endl;
    cout << "3 - Excluir" << endl;

    if(cin >> option){
        if(option == "1"){
            this->adicionarFilme();
        }else if(option == "2"){
            this->editarFilme();
        }else if(option == "3"){
            this->excluirFilme();
        }else if(option == "back"){
            this->gerenciarCatalogo();
        }else if (option == "exit"){
            this->saveData();
        }
    }
}

void Controller::gerenciarDocumentarios(){
    system("clear");
    string option;

    cout << "======== Gerenciar Documentários ========" << endl;
    cout << "O que deseja fazer?" << endl;
    cout << "1 - Adicionar" << endl;
    cout << "2 - Editar" << endl;
    cout << "3 - Excluir" << endl;

    if (cin >> option)
    {
        if (option == "1")
        {
            this->adicionarDocumentario();
        }
        else if (option == "2")
        {
            this->editarDocumentario();
        }
        else if (option == "3")
        {
            this->excluirDocumentario();
        }
        else if(option == "back"){
            this->gerenciarCatalogo();
        }else if (option == "exit"){
            this->saveData();
        }
    }
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
    string data_lancamento;
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
    cout << "Data de lançamento: " << endl;
    cin >> data_lancamento;
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

    cout << "Filme adicionado com sucesso! Aperte ENTER para continuar" << endl;

    cin.ignore();
    cin.get();

    this->gerenciarFilmes();
}

void Controller::listarFilmes(){
    system("clear");

    int count = 1;
    cout << "======== Filmes ========" << endl;
    cout << "Aperte ENTER para voltar" << endl;

    for (auto it(this->filmes.begin()); it != this->filmes.end(); it++){
        cout << count << " - " << it->getNome() << endl;
        count++;
    }

    cin.ignore();
    cin.get();
    this->consultarCatalogo();
    
}

void Controller::editarFilme()
{
    system("clear");
    int count = 1, id;
    cout << "======== Editar filme ========" << endl;
    cout << "Informe o número do filme que desejas editar." << endl;

    for (auto it(this->filmes.begin()); it != this->filmes.end(); it++)
    {
        cout << count << " - " << it->getNome() << endl;
        count++;
    }

    cin >> id;
    system("clear");

    string nome;
    string descricao;
    string duracao;
    string data_lancamento;
    vector<string> categorias;
    string diretor;
    vector<string> elenco;

    cout << "======== Editar Filme " << id <<" ========" << endl;
    cout << "Título do filme: " << endl;
    cin >> nome;
    cout << "Descricao: " << endl;
    cin >> descricao;
    cout << "Duração: " << endl;
    cin >> duracao;
    cout << "Data de lançamento: " << endl;
    cin >> data_lancamento;
    cout << "Categorias do filme: " << endl;
    categorias = this->adicionarCategorias();
    cout << "Nome do diretor: " << endl;
    cin >> diretor;
    cout << "Elenco: " << endl;
    elenco = this->adicionarElenco();

    this->filmes[id-1].setVideo(nome,
                descricao,
                duracao,
                data_lancamento,
                categorias,
                diretor,
                elenco);

    cout << "FILME EDITADO COM SUCESSO! Aperte ENTER para continuar" << endl;

    cin.ignore();
    cin.get();

    this->gerenciarFilmes();
}

void Controller::excluirFilme(){
    system("clear");
    int count = 1, id;
    cout << "======== Editar filme ========" << endl;
    cout << "Informe o número do filme que desejas excluir." << endl;

    for (auto it(this->filmes.begin()); it != this->filmes.end(); it++)
    {
        cout << count << " - " << it->getNome() << endl;
        count++;
    }

    cin >> id;
    this->filmes.erase(this->filmes.begin() + (id-1));
    cout << "FILME EXLUÍDO COM SUCESSO! Aperte ENTER para continuar" << endl;

    cin.ignore();
    cin.get();

    this->gerenciarFilmes();

}

void Controller::adicionarDocumentario()
{
    system("clear");

    string nome;
    string descricao;
    string duracao;
    string data_lancamento;
    vector<string> categorias;
    string diretor;

    cout << "======== Adicionar Documentario ========" << endl;
    cout << "Título do documentario: " << endl;
    cin >> nome;
    cout << "Descricao: " << endl;
    cin >> descricao;
    cout << "Duração: " << endl;
    cin >> duracao;
    cout << "Data de lançamento: " << endl;
    cin >> data_lancamento;
    cout << "Categorias do documentario: " << endl;
    categorias = this->adicionarCategorias();
    cout << "Nome do diretor: " << endl;
    cin >> diretor;

    Documentario documentario(  nome,
                                descricao,
                                duracao,
                                categorias,
                                data_lancamento,
                                diretor);

    this->documentarios.push_back(documentario);

    cout << "Documentário adicionado com sucesso! Aperte ENTER para continuar" << endl;

    cin.ignore();
    cin.get();

    this->gerenciarDocumentarios();
}

void Controller::listarDocumentarios()
{
    system("clear");

    int count = 1;
    cout << "======== Documentarios ========" << endl;
    cout << "Aperte ENTER para voltar" << endl;

    for (auto it(this->documentarios.begin()); it != this->documentarios.end(); it++)
    {
        cout << count << " - " << it->getNome() << endl;
        count++;
    }

    cin.ignore();
    cin.get();
    this->consultarCatalogo();
}

void Controller::editarDocumentario()
{
    system("clear");
    int count = 1, id;
    cout << "======== Editar Documentario ========" << endl;
    cout << "Informe o número do documentário que desejas editar." << endl;

    for (auto it(this->documentarios.begin()); it != this->documentarios.end(); it++)
    {
        cout << count << " - " << it->getNome() << endl;
        count++;
    }

    cin >> id;
    system("clear");

    string nome;
    string descricao;
    string duracao;
    string data_lancamento;
    vector<string> categorias;
    string diretor;

    cout << "======== Adicionar Documentario ========" << endl;
    cout << "Título do documentario: " << endl;
    cin >> nome;
    cout << "Descricao: " << endl;
    cin >> descricao;
    cout << "Duração: " << endl;
    cin >> duracao;
    cout << "Data de lançamento: " << endl;
    cin >> data_lancamento;
    cout << "Categorias do documentario: " << endl;
    categorias = this->adicionarCategorias();
    cout << "Nome do diretor: " << endl;
    cin >> diretor;

    Documentario documentario(nome,
                              descricao,
                              duracao,
                              categorias,
                              data_lancamento,
                              diretor);

    this->documentarios[id-1].setVideo( nome,
                                        descricao,
                                        duracao,
                                        categorias,
                                        data_lancamento,
                                        diretor);

    cout << "DOCUMENTARIO EDITADO COM SUCESSO! Aperte ENTER para continuar" << endl;

    cin.ignore();
    cin.get();

    this->gerenciarDocumentarios();
}

void Controller::excluirDocumentario()
{
    system("clear");
    int count = 1, id;
    cout << "======== Editar Documentario ========" << endl;
    cout << "Informe o número do filme que desejas excluir." << endl;

    for (auto it(this->documentarios.begin()); it != this->documentarios.end(); it++)
    {
        cout << count << " - " << it->getNome() << endl;
        count++;
    }

    cin >> id;
    this->documentarios.erase(this->documentarios.begin() + (id - 1));
    cout << "DOCUMENTÁRIO EXCLUÍDO COM SUCESSO! Aperte ENTER para continuar" << endl;

    cin.ignore();
    cin.get();

    this->gerenciarDocumentarios();
}