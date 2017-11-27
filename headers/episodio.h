#ifndef EPISODIO_H
#define EPISODIO_H

#include "../headers/video.h"
#include <iostream>

class Episodio : Video
{
    public:
        Episodio(int new_id,
        string new_nome,
        string new_descricao,
        string new_duracao,
        Date new_data_lancamento,
        vector<string> new_categoria, 
        int num_ep,
        int temporada);

        /*
        *@brief Função sobrecarregada para mostrar este objeto
        */
        void printVideo();

        void setVideo(int new_id,
        string new_nome,
        string new_descricao,
        string new_duracao,
        Date new_data_lancamento,
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