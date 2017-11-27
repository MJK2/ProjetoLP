#include "../headers/categoria.h"

Categoria::Categoria(){
    this->categoria = "";
}

Categoria::Categoria(string new_categoria){
    this->categoria = new_categoria;
}

void Categoria::setCategoria(string new_categoria){
    this->categoria = new_categoria;
}

string Categoria::getCategoria(){
    return this->categoria;
}