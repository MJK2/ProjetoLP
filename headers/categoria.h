#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <string>

using namespace std;

class Categoria{
    public:
        Categoria();
        Categoria(string new_categoria);

        void setCategoria(string new_categoria);
        string getCategoria();
    private:
        string categoria;        
};

#endif