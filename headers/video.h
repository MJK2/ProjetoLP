/**
* @file video.h
* @brief Implementação de um header referente a criacao da classe Video.
*/
#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <vector>
#include "date.h"

using namespace std;

/// Classe pai de Serie, Documentario e Filme.
class Video{
    protected:
        /// O nome do video.
        string nome;       
        /// Um vector de strings que representa as categorias presentes em um video.                    
        vector<string> categoria;    
        /// A duracao de um video.
        string duracao;           
        /// A descricao de um video.     
        string descricao;
        /// A data de lancamento de um video.
        Date data_lancamento;

    public:  
        /// Construtor vazio de Video.
        Video();
        /// Construtor completamente preenchido de Video.
        Video(  string new_nome,
                string new_descricao,
                string new_duracao,
                Date new_data_lancamento,
                vector<string> new_categoria);
        
        /// @return nome do video.
        string getNome();
        /// @return duracao do video.
        string getDuracao();
        /// @return descricao do video.
        string getDescricao();
        /// @return data de lancamento do video.
        Date getDataLancamento();
        /// @return categoria(s) do video.
        vector<string> getCategoria();

        /// @param new_nome novo nome do video.
        void setNome(string new_nome);
        /// @param new_duracao nova duracao do video.
        void setDuracao(string new_duracao);
        /// @param new_descricao nova descricao do video.
        void setDescricao(string new_descricao);
        /// @param new_data_lancamento nova data de lancamento do video.
        void setDataLancamento(Date new_data_lancamento);
        /// @param new_categoria nova categoria do video.
        void setCategoria(vector<string> new_categoria);

        /// @function Imprime todas as categorias cadastradas.
        void printCategorias();
        /// @function Metodo virtual, para uso das classes filhas exclusivamente, que imprime as informacoes do video
        virtual void printVideo();
        void setVideo();
};

#endif