
/**
 * @file serie.h
 */

#ifndef SERIE_HPP
#define SERIE_HPP

#include <string>
#include <vector>
#include "categoria.h"
#include "date.h"

using namespace std;
/*
 *@class Serie
 *@brief Classe para criar objetos Serie. */
class Serie: public Video{
    protected:
        Epsodio **temporada; // uma matriz de epsodios
        int n_temporada;

    public:  
        Serie();

        // GETTERS
        Epsodio getEpsodio(); // acho q tem algo nebuloso aqui; mas nao sei o q é
        int getN_Temporada();

        // SETTERS
        void setEpsodio(Epsodio ep); // 
        void setN_Temporada(int n); //

        virtual void printSerie();
        virtual Serie getSerie();
};

#endif