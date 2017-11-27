#ifndef SERIE_HPP
#define SERIE_HPP

#include <string>
#include <vector>
#include "categoria.h"
#include "date.h"
#include "episodio.h"

using namespace std;
/*
 *@class Serie
 *@brief Classe para criar objetos Serie. */
class Serie{
    private:
        int temporadas;
        Episodio** lista;
        vector<string> categoria;

    public:  
        Serie(int temporadas, vector<string> new_categoria);

};

#endif