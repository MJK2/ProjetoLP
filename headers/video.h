/*
 * @file video.h
 */

#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>
#include <vector>
#include "categoria.h"
#include "date.h"

using namespace std;

class Video{
    protected:
        int id;
        string nome;// acho melhor chamar de titulo
        vector<Categoria> categoria;
        string duracao;
        string descricao;
        Date data_lancamento;

    public:  
        Video();
        /**
        * @brief Retorna o ID do vídeo
        * @return this->id
        */
        int getId();
        /**
        * @brief Retorna o Título do vídeo
        * @return this->nome;
        */
        string getNome();
        /**
        * @brief Retorna duração do vídeo
        * @return this->ducacao;
        */
        string getDuracao();

        /**
        * @brief Modifica o ID do vídeo
        * @param new_id;
        */
        void setId(int new_id);
        /**
        * @brief Modifica o título do vídeo
        * @param new_nome
        */
        void setNome(string new_nome);
        /**
        * @brief Modifica a duração do vídeo
        * @param new_duracao
        */
        void setDuracao(string new_duracao);

        virtual void printVideo()=0;
        virtual Video getVideo()=0;
};

#endif  // final video.h