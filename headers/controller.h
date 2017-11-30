/**
* @file controller.h
* @brief Implementação de um header referente a classe Controller, que gerencia toda a aplicacao.
*/
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "documentario.h"
#include "filme.h"

/// Classe que controla todo o programa
class Controller
{
  public:
    /// Construtor vazio de Controller. Recupera os dados contidos nos .dat e chama o menu inicial.
    Controller();
    /// Destrutor vazio de Controller
    ~Controller();

    /// Demonstra ao usuario as opcoes de consulta de videos.
    void consultarCatalogo();
    /// Demonstra ao usuario as opcoes de gerenciamento (adicionar, alterar ou excluir videos).
    void gerenciarCatalogo();

    /// Demonstra ao usuario as opcoes de consulta e gerenciamento de videos.
    void menuInicial();
    /// Abre os arquivos .dat para escrita. Chamado apos cada alteracao executada.
    void saveData();
    /// Demonstra ao usuario as opcoes de gerenciamento de filmes (adicionar, alterar ou excluir filmes).
    void gerenciarFilmes();
    /// Demonstra ao usuario as opcoes de gerenciamento de documentarios (adicionar, alterar ou excluir documentarios).
    void gerenciarDocumentarios();
    /// Adiciona um filme no database a partir de entradas do usuario.
    void adicionarFilme();
    /// Edita um filme ja existente no database a partir de entradas do usuario.
    void editarFilme();
    /// Exclui um filme ja existente no database utilizando o nome do filme.
    void excluirFilme();
    /// Imprime todos os nomes de filmes presentes no database.
    void listarFilmes();

    /// Adiciona um documentario no database a partir de entradas do usuario.
    void adicionarDocumentario();
    /// Imprime todos os nomes de documentarios presentes no database.
    void listarDocumentarios();
    /// Edita um documentario ja existente no database a partir de entradas do usuario.
    void editarDocumentario();
    /// Exclui um documentario ja existente no database a partir do nome do documentario.
    void excluirDocumentario();

    /// @param line uma string que contem informacoes lidas do arquivo filme.dat
    /// @return Um objeto filme.
    /// @brief Pega as informacoes de um filme, contidas no arquivo filme.dat, transforma-os em um vector de strings e inicializa um objeto filme a partir deste vector.
    Filme stringToFilme(string line);
    /// @param line uma string que contem informacoes lidas do arquivo documentario.dat
    /// @return Um objeto Documentario.
    /// @brief Pega as informacoes de um documentario, contidas no arquivo documentaroi.dat, 
    /// transforma-os em um vector de strings e inicializa um objeto documentario partir deste vector.
    Documentario stringToDocumentario(string line);

    private:
    /// Um vector de Filmes.
    vector<Filme> filmes;
    /// Um vector de Documentarios.
    vector<Documentario> documentarios;

    /// @return Um vector de strings que representam as categorias presentes em um video.
    /// @brief Pede-se ao usuario a entrada de categorias de um video.
    vector<string> adicionarCategorias();
    /// @return um vector de string que representam o elenco presente em um video.
    /// @brief Pede-se ao usuario a entrada de categorias de um video.
    vector<string> adicionarElenco();
};

#endif