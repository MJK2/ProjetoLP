/**
* @file video.h
* @brief Implementação de um header referente a classe Video.
*/
#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

/// Classe que representa um Video. Pai das classes Documentario e Filme.
class Video{
    protected:
        /// O nome do video.
        string nome;
        /// Um vector de strings que representa as categorias de um video.
        vector<string> categoria;
        /// a duracao de um video.
        string duracao;
        /// a descricao de um video.
        string descricao;
        /// a data de lancamento de um video.
        string data_lancamento;

    public:  
        /// O construtor vazio de Video.
        Video();
        /// Construtor parametrizado de Video.
        Video(  string new_nome,
                string new_descricao,
                string new_duracao,
                string new_data_lancamento,
                vector<string> new_categoria);

        /// @return o nome do video.
        /// @brief Retorna o nome do video.
        string getNome();
        /// @return a duracao de um video.
        /// @brief Retorna a duracao de um video.
        string getDuracao();
        /// @return a descricao de um video.
        /// @brief Retorna a descricao de um video.
        string getDescricao();
        /// @return a data de lancamento de um video.
        /// @brief Retorna a data de lancamento de um video.
        string getDataLancamento();
        /// @return um vector de strings que representa as categorias de um video.
        /// @brief Retorna as categorias de um video, como um vector de strings.
        vector<string> getCategoria();

        /// @param new_nome o novo nome de um video.
        /// @brief Insere um novo nome para um video.
        void setNome(string new_nome);
        /// @param new_duracao a nova duracao de um video.
        /// @brief Insere uma nova duracao para um video.
        void setDuracao(string new_duracao);
        /// @param new_descricao a nova descricao de um video.
        /// @brief Insere um novo nome para um video.
        void setDescricao(string new_descricao);
        /// @param new_data_lancamento a nova data de lancamento de um video.
        /// @brief Insere uma nova descricao para um video.
        void setDataLancamento(string new_data_lancamento);
        /// @param new_categoria as novas categorias de um filme, representadas por um vector de strings.
        /// @brief Insere uma nova categoria para um video.
        void setCategoria(vector<string> new_categoria);

        /// Imprime na tela todas as categorias contidas em um video.
        void printCategorias();
        /// Metodo virtual a ser utilizado pelas classes filhas.
        virtual void printVideo();
        /// Insere novas informacoes em um video.
        virtual void setVideo();
};

#endif
