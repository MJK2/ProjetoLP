#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <vector>
#include "categoria.h"
#include "date.h"

using namespace std;

class Video{
    protected:
        int id;
        string nome;
        vector<Categoria> categoria;
        string duracao;
        string descricao;
        Date data_lancamento;

    public:  
        Video();

        Video(  int new_id, 
                string new_nome, 
                string descricao, 
                string new_duracao, 
                Date new_data_lancamento);

        int getId();
        string getNome();
        string getDuracao();
        string getDescricao();
        Date getDataLancamento();
        vector<Categoria> getCategoria();

        void setId(int new_id);
        void setNome(string new_nome);
        void setDuracao(string new_duracao);
        void setDescricao(string new_descricao);
        void setDataLancamento(date new_data_lancamento);
        void setVideo(int new_id, string new_nome, string new_duracao);
        void setCategoria(vector<Categoria> new_categoria);

        virtual void printVideo();
        virtual Video getVideo();
};

#endif