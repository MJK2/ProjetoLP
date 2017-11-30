#ifndef SERIE_H
#define SERIE_H

#include <string>
#include <vector>
#include "episodio.h"

using namespace std;
/*
 *@class Serie
 *@brief Classe para criar objetos Serie. */
class Serie{
    private:
        string nome;
        vector<vector<Episodio>> temporadas;
        vector<string> categoria;

    public:  
        Serie();
        Serie(vector<vector<Episodio>> new_temporadas);

};

#endif