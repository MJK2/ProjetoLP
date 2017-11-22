/*
 * @file documentario.h
 */
#ifndef DOCUMENTARIO_HPP
#define DOCUMENTARIO_HPP 
#include "video.h"
#include "categoria.h"

class Documentario : Video{
    public:
        Documentario();

        void printVideo();
        

    private:

        string diretor;
};
#endif