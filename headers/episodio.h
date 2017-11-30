#ifndef EPISODIO_H
#define EPISODIO_H

#include "../headers/video.h"
#include <iostream>

class Episodio : Video
{
    public:
        Episodio(string new_nome,
        string new_descricao,
        string new_duracao,
        string new_data_lancamento,
        vector<string> new_categoria, 
        int num_ep,
        int temporada);

        /*
        *@brief Função sobrecarregada para mostrar este objeto
        */
        void printVideo();

        void setVideo(string new_nome,
        string new_descricao,
        string new_duracao,
        string new_data_lancamento,
        vector<string> new_categoria, 
        int num_ep,
        int temporada);

        void setTemporada(int temp);
        void setEp(int ep);

        int getTemporada();
        int getEp();

    private:
        int num_ep;
        int temporada;

};
#endif