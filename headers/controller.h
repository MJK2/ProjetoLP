#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "documentario.h"
#include "filme.h"
#include "serie.h"

class Controller
{
  public:
    Controller();
    ~Controller();

    void consultarCatalogo();
    void gerenciarCatalogo();

    void gerenciarFilmes();
    void gerenciarDocumentarios();
    void gerenciarSeries();

    //cruds para filme
    void adicionarFilme();
    void editarFilme();
    void excluirFilme();
    void listarFilmes();
    void listarFilme();

    //cruds para documentario
    void adicionarDocumentario();
    void listarDocumentarios();
    void editarDocumentario();
    void excluirDocumentario();

    //conversores
    Filme stringToFilme(string line);
    Documentario stringToDocumentario(string line);

    private:
    vector<Filme> filmes;
    vector<Documentario> documentarios;
    vector<Serie> series;

    vector<string> adicionarCategorias();
    vector<string> adicionarElenco();
};

#endif