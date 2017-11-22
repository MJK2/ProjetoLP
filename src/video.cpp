/* video.cpp
 *
 * PROJETO DE LP
 *
 * LEIA O README
 *
 */

#include "../headers/video.h"

 Vide::Video() = delete;
 Video(){
     std::cout << "Id: ";
     std::cin >> this->id;

     std:cout << "Título: ";
     std::cin >> this->nome;
     std::cout << "Duração: ";
     std::cin >> this->duracao;

     std::cout << "Descrição: ";
     std::cin >> this->descricao;

     // fazer data lançamento e categoria
}

 int Vide::getId(){
     return this->id;
 }

 string Vide::Vide::getNome(){
     return this->nome;
 }

 string Vide::getDuracao(){
     return this->duracao;
 }

 void Vide::setId(int new_id){
     this->id = new_id;
 }

 void Vide::setNome(string new_nome){
     this->nome = new_nome;
 }

 void Vide::setDuracao(string new_duracao){
     this->duração = new_duracao;
 }