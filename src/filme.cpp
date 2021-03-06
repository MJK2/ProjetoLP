/*
 *@file filme.cpp
 */
#include "../headers/filme.h"


/*
 *@brief Construtor de objeto Filme
 */
Filme::Filme( string new_nome,
		      string new_descricao,
		      string new_duracao,
		      string new_data_lancamento,
		      vector<string> new_categoria, 
		      string diretor,
		      vector<string> elenco)
{
	this->nome = new_nome;
	this->descricao = new_descricao;
	this->duracao = new_duracao;
	this->data_lancamento = new_data_lancamento;
	this->categoria = new_categoria;
	this->diretor = diretor;
	this->elenco = elenco;
}

void Filme::printVideo(){
	cout << "Título: " << getNome() << endl;
	cout << "Duração: " << getDuracao() << endl;
	cout << "Descrição: " << getDescricao() << endl;
	cout << "Diretor: " << diretor << std::endl;
	showElenco();
}

void Filme::setVideo(string new_nome,
		      string new_descricao,
		      string new_duracao,
		      string new_data_lancamento,
		      vector<string> new_categoria, 
		      string diretor,
		      vector<string> elenco)
{
	this->nome = new_nome;
	this->descricao = new_descricao;
	this->duracao = new_duracao;
	this->data_lancamento = new_data_lancamento;
	this->categoria = new_categoria;
	this->diretor = diretor;
	this->elenco = elenco;	
}

void Filme::setDiretor(string new_diretor){
	this->diretor = new_diretor;
}

void Filme::setElenco(vector<string> new_elenco){
	this->elenco = new_elenco;
}

void Filme::showElenco(){
	cout << "Elenco:" << std::endl;
	for (auto it(this->elenco.begin()); it != this->elenco.end(); it++){
		cout << *it << endl;
	}
}

string Filme::writeFilme(){
	string filme = "";

	filme = this->nome +" " +
			this->descricao+" " +
			this->duracao+" " +
			this->data_lancamento+" "+
			this->diretor + " |";
	for( auto it(this->categoria.begin()); it != this->categoria.end(); it++ ){
		filme += *it + " ";
	}
	filme += "| |";
	for( auto i(this->elenco.begin()); i != this->elenco.end(); i++ ){
		filme += *i + " ";
	}
	filme += "|";

	return filme;
}