/*
 *@file filme.cpp
 */
#include "../headers/filme.h"


/*
 *@brief Construtor de objeto Filme
 */
Filme::Filme(int new_id,
		      string new_nome,
		      string new_descricao,
		      string new_duracao,
		      Date new_data_lancamento,
		      vector<string> new_categoria, 
		      string diretor,
		      vector<string> elenco):
		Video{new_id, 
      		new_nome, 
      		new_descricao, 
      		new_duracao, 
      		new_data_lancamento,
      		new_categoria},
      	elenco(elenco),
      	diretor(diretor)
	{}

void Filme::printVideo(){
	std::cout << "Título: " << getNome() << endl;
	std::cout << "Duração: " << getDuracao() << endl;
	std::cout << "Descrição: \n" << getDescricao() << endl;
	std::cout << "Diretor: " << diretor << std::endl;
	showElenco();
}
void Filme::setVideo(){
	
}
void Filme::showElenco(){
	std::cout << "Elenco:" << std::endl;
	for (int i = 0; i < elenco.size(); i++){
		std::cout << elenco[i] << std::endl;
	}
}
Video Filme::getVideo(){
	return this->getVideo();
}