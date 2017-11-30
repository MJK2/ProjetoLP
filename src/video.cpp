/**
* @file video.cpp
* @brief Implementação de um header referente a criacao da classe Video.
*/
#include "../headers/video.h"

Video::Video(){
    this->nome = "Sem nome.";
    this->duracao = "Sem duracao.";
    this->descricao = "Sem descricao.";
    this->categoria.push_back("Sem categoria.");
}

Video::Video(
      string new_nome,
      string new_descricao,
      string new_duracao,
      string new_data_lancamento,
      vector<string> new_categoria)
{
    this->nome = new_nome;
    this->duracao = new_duracao;
    this->descricao = new_descricao;
    this->data_lancamento = new_data_lancamento;
    this->categoria = new_categoria;
}

void Video::setNome(string new_nome){
    this->nome = new_nome;
}

void Video::setDuracao(string new_duracao){
    this->duracao = new_duracao;
}

void Video::setDescricao(string new_descricao){
    this->descricao = new_descricao;
}

void Video::setDataLancamento(string new_data_lancamento){
    this->data_lancamento = new_data_lancamento;
}

void Video::setCategoria(vector<string> new_categoria){
    this->categoria = new_categoria;
}

string Video::getNome(){
    return this->nome;
}

string Video::getDuracao(){
    return this->duracao;
}

string Video::getDescricao(){
    return this->descricao;
}

string Video::getDataLancamento(){
    return this->data_lancamento;
}

vector<string> Video::getCategoria(){
    return this->categoria;
}

void Video::printCategorias(){
    for(auto it (this->categoria.begin()); it < this->categoria.end(); it++)
        cout << *it << "| ";
    cout << endl;
}

void Video::printVideo(){
    /* empty */
}
