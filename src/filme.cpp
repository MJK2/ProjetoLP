/*
 *@file filme.cpp
 */
#include "../headers/filme.h"


/*
 *@brief Construtor de objeto Filme
 */
Filme::Filme(){
	// fazer
}

void Filme::printVideo(){
	std::cout << "Título: " << getNome() << endl;
	std::cout << "Duração: " << getDuracao() << endl;
	std::cout << "Descrição: \n" << getDescricao() << endl;
	std::cout << "Data: " << getData() << endl;
	std::cout << "Diretor: " << diretor << std::endl;
	std::cout << "Elenco: " << std::endl;
	for(int i = 0; i < elenco.size(); i++){
		std::cout << elenco[i] << std::endl; // pode mudar pra for each
	}
}
void Filme::setVideo();
Video Filme::getVideo(){
	return this->getVideo();
}