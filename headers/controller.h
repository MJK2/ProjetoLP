#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "documentario.h"
#include "filme.h"
#include "serie.h"

class Controller{
    public:
        Controller();

        void consultarCatalogo();
        void gerenciarCatalogo();
    
    private:
        vector<Filme> filmes;
        vector<Documentario> documentarios;
        vector<Serie> series;      

};

#endif