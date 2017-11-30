/**
* @file serie.h
* @brief Implementação de um header referente a classe Serie.
*/
#ifndef SERIE_H
#define SERIE_H

#include <string>
#include <vector>
#include "episodio.h"

using namespace std;
/// Classe que representa uma Serie.
class Serie{
    private:
    	/// O nome de uma serie
        string nome;
        /// Um vector de strings que representa as temporadas de uma Serie.
        vector<vector<Episodio>> temporadas;
        /// Um vector de strings que representa as categorias de um Serie.
        vector<string> categoria;

    public:  
    	/// O construtor vazio de Serie.
        Serie();
        /// O construtor de 1 parametro de Serie.
        Serie(vector<vector<Episodio>> new_temporadas);

};

#endif