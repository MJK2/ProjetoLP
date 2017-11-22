/* 
 * @file video.cpp
 *
 * PROJETO DE LP
 *
 * LEIA O README
 *
 */

#include "../headers/serie.h"
using namespace std;
// FALTA CRIAR O CONSTRUTOR

Epsodio Serie::getEpsodio(){return this->epsodio;} // acho q tem algo nebuloso aqui; mas nao sei o q é
int Serie::getN_Temporada(){return this->temporada;}


// SETTERS
void Serie::setEpsodio(Epsodio ep){this->ep = ep} // aqui tbm tem algo estranho. alguem com um entendimento melhor verifica
// Serie::setN_Temporada(int n); acho desnecessario, pois isso ficaria a cargo de uma criação de uma nova temporada
/*
 *@brief Printa na tela as informações do objeto
 */
virtual void Serie::printSerie(){
	cout << "Título: " << getNome() << endl
		 << "Duração: " << getDuracao() << endl
		 << "Descrição: \n" << getDescricao() << endl
		 << "Data: " << getData() << endl;
}
virtual Serie Serie::getSerie();