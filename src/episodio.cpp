#include "../headers/episodio.h"

Episodio::Episodio(string new_nome,
        string new_descricao,
        string new_duracao,
        string new_data_lancamento,
        vector<string> new_categoria, 
        int num_ep,
        int temporada)
{
    this->nome = new_nome;
    this->descricao = new_descricao;
    this->duracao = new_duracao;
    this->data_lancamento = new_data_lancamento;
    this->categoria = new_categoria;
    this->num_ep = num_ep;
    this->temporada = temporada;
}

void Episodio::setVideo(string new_nome,
        string new_descricao,
        string new_duracao,
        string new_data_lancamento,
        vector<string> new_categoria, 
        int num_ep,
        int temporada)
{
    this->nome = new_nome;
    this->descricao = new_descricao;
    this->duracao = new_duracao;
    this->data_lancamento = new_data_lancamento;
    this->categoria = new_categoria;
    this->num_ep = num_ep;
    this->temporada = temporada;
}

void Episodio::setTemporada(int temp){
    this->temporada = temp;
}

void Episodio::setEp(int ep){
    this->num_ep = ep;
}

int Episodio::getTemporada(){
    return this->temporada;
}

int Episodio::getEp(){
    return this->num_ep;
}

void Episodio::printVideo(){
    
}