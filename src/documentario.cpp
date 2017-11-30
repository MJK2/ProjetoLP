#include "../headers/documentario.h"

Documentario::Documentario(){
    this->nome = "Sem nome.";
    this->duracao = "Sem duracao.";
    this->descricao = "Sem descricao.";
    this->diretor = "Sem diretor";
}

Documentario::Documentario(
    string new_nome,
    string new_descricao,
    string new_duracao,
    vector<string> new_categoria,
    string new_data_lancamento,
    string diretor)
{
    this->nome = new_nome;
    this->duracao = new_duracao;
    this->descricao = new_descricao;
    this->data_lancamento = new_data_lancamento;
    this->categoria = new_categoria;
    this->diretor = diretor;
}

string Documentario::getDiretor(){
    return this->diretor;
}

void Documentario::setDiretor(string new_diretor){
    this->diretor = new_diretor;
}

void Documentario::printVideo(){
    cout << "Nome: " << getNome() << endl
         << "Diretor: " << this->getDiretor() << endl
         << "Descrição: " << getDescricao() << endl
         << "Duração: " << getDuracao() << endl
         << "Data de lançamento: " << getDataLancamento() << endl;
    cout << "Categoria: ";
    this->printCategorias();
}

string Documentario::writeDocumentario()
{
    string documentario = "";

    documentario = this->nome + " " +
                   this->descricao + " " +
                   this->duracao + " " +
                   this->data_lancamento + " " +
                   this->diretor + " |";
    for (auto it(this->categoria.begin()); it != this->categoria.end(); it++)
    {
        documentario += *it + " ";
    }
    documentario += "|";

    return documentario;
}