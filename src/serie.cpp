/* 
 * @file video.cpp
 *
 * PROJETO DE LP
 *
 * LEIA O README
 *
 */

#include "../headers/serie.h"

Serie::Serie(int temporadas, vector<string> new_categoria){
	this->lista = new Episodio* [temporadas];
	this->categoria = new_categoria;
}