#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <string>

using namespace std;

class Categoria{
    public:
        Categoria();

        void setCategoria();
        string getCategoria();
    private:
        string categoria;        
};

#endif