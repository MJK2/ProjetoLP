#include <string>
#include <vector>
#include "categoria.h"

using namespace std;

class Video{
    protected:
        int id;
        string nome;
        vector<Categoria> categoria;
        string duracao;
        string descricao;

    public:  
        Video();

        int getId();
        string getNome();
        string getDuracao();

        void setId(int new_id);
        void setNome(string new_nome);
        void setDuracao(string new_duracao);

        virtual void printVideo();
        virtual Video getVideo();
};