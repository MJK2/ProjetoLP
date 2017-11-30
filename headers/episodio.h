/**
* @file episodio.h
* @brief Implementação de um header referente a classe Episodio.
*/
#ifndef EPISODIO_H
#define EPISODIO_H

#include "../headers/video.h"
#include <iostream>

/// Classe que representa um Episodio. Herda de Video.
class Episodio : Video
{
    public:
        /// Construtor parametrizado de Episodio.
        Episodio(string new_nome,
        string new_descricao,
        string new_duracao,
        string new_data_lancamento,
        vector<string> new_categoria, 
        int num_ep,
        int temporada);

        /// Sobrecarrega o metodo printVideo(), que pertence a classe pai Video. Imprime todas as informacoes de um Epidosio.
        void printVideo();

        /// Insere novas informacoes em um objeto Episodio.
        void setVideo(string new_nome,
        string new_descricao,
        string new_duracao,
        string new_data_lancamento,
        vector<string> new_categoria, 
        int num_ep,
        int temporada);

        /// @param temp A temporada em que um episodio pertence.
        /// @brief Insere a temporada em que um episodio pertence.
        void setTemporada(int temp);
        /// @param ep O numero do episodio de uma temporada.
        /// @brief Insere o numero de um episodio.
        void setEp(int ep);

        /// @return A temporada que um episodio pertence.
        /// @brief Retorna a temporada de um episodio.
        int getTemporada();
        /// @return O numero do episodio em relacao a uma temporada.
        /// @brief Retorna o numero de um episodio. 
        int getEp();

    private:
        /// O numero de um epidosio.
        int num_ep;
        /// A temporada de um episodio.
        int temporada;

};
#endif