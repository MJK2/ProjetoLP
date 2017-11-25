#include "../headers/video.h"


Video::Video(){
    this->nome = "Sem nome.";
    this->duracao = "Sem duracao.";
    this->descricao = "Sem descricao.";
    this->categoria.push_back('Sem categoria.');
}

Video::Video(int new_id,
      string new_nome,
      string descricao,
      string new_duracao,
      Date new_data_lancamento)
{
    this->id = new_id;
    this->nome = new_nome;
    this->duracao = new_duracao;
    this->descricao = new_descricao;
    this->data_lancamento = new_data_lancamento;
}

Video::setId(int new_id)
{
    this->id = new_id;
}

Video::setNome(string new_nome){
    this->nome = new_nome;
}

Video::setDuracao(string new_duracao){
    this->duracao = new_duracao;
}

Video::setDescricao(string new_descricao){
    this->descricao = new_descricao;
}

Video::setDataLancamento(Date new_data_lancamento){
    this->data_lancamento = new_data_lancamento;
}

Video::setVideo(int new_id, string new_nome, string new_duracao, string new_descricao, Date new_data_lancamento){
    this->setId(new_id);
    this->setNome(new_nome);
    this->setDuracao(new_duracao);
    this->setDescricao(new_descricao);
    this->setDataLancamento(new_data_lancamento);
}

int Video::getId(){
    return this->id;
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

Date Video::getDataLancamento(){
    return this->data_lancamento;
}


