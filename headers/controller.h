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

        void cadastrarVideo(Video video);
        void editarVideo(Video video);
        void deletarVideo(Video video);
        void buscarVideo();
};

#endif