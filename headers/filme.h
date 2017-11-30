/**
* @file filme.h
* @brief Implementação de um header referente a criacao da classe Filme.
*/

#ifndef FILME_H
#define FILME_H

#include "../headers/video.h"
#include <iostream>

/// Classe que representa um Filme. Herda de Video.
class Filme : Video
{
  public:
    /// Construtor completamente preenchido da classe filme.
    Filme(string new_nome,
      string new_descricao,
      string new_duracao,
      Date new_data_lancamento,
      vector<string> new_categoria, 
      string diretor,
      vector<string> elenco);

    /// @function Imprime as informacoes de um Filme.
    void printVideo();
    /// @function Preenche os dados de um filme.
    /// @param new_nome o nome do filme.
    /// @param new_descricao a descricao do filme.
    /// @param new_duracao a duracao do filme.
    /// @param new_data_lancamento a data de lancamento do filme.
    /// @param new_categoria um vector de strings contendo as categorias do filme.
    /// @param diretor o diretor do filme.
    /// @param elenco uma vector de strings com o elenco do filme.
    void setVideo(string new_nome,
		      string new_descricao,
		      string new_duracao,
		      Date new_data_lancamento,
		      vector<string> new_categoria, 
		      string diretor,
		      vector<string> elenco);
    
    /// @function Insere o diretor do filme.
    /// @param new_diretor o diretor do filme.
    void setDiretor(string new_diretor);
    /// @function Insere o elenco do filme.
    /// @param new_elenco uma vector de strings contendo o elenco do filme.
    void setElenco(vector<string> new_elenco);
    
    /// @function Imprime o elenco de um filme.
    void showElenco(); 
    /// @function Imprime todas as informacoes do filme.
    string writeFilme();

  private:
    /// O diretor do filme.
    string diretor;
    /// O elenco do filme.
    vector<string> elenco;
};

#endif