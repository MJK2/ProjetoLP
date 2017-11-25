/*
 *@file filme.h
 */

#ifndef FILME_H
#define FILME_H

#include "../headers/video.h"
#include <iostream>


class Filme : Video
{
  public:
    Filme(int new_id,
      string new_nome,
      string new_descricao,
      string new_duracao,
      Date new_data_lancamento,
      vector<string> new_categoria, 
      string diretor,
      vector<string> elenco);

    /*
    *@brief Função sobrecarregada para mostrar este objeto
    */
    void printVideo();
    void setVideo();
    Video getVideo();
    
    /*
    *@brief função para mostrar o elenco
    */
    void showElenco(); 

  private:
    string diretor;
    vector<string> elenco;
};

#endif