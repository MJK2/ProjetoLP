#include <string>
#include <vector>
#include "categoria.h"
#include "date.h"

using namespace std;

class Serie{
    protected:
        int id;
        string nome;
        vector<Categoria> categoria;
        Epsodio **temporada; // uma matriz de epsodios
        int n_temporada;
        Date data_lancamento;

    public:  
        Serie();

        int getId();
        string getNome();
        string getDuracao();
        Epsodio getEpsodio(); // acho q tem algo nebuloso aqui; mas nao sei o q é
        int getN_Temporada();
        string getDescrição();


        // SETTERS
        void setId(int new_id);
        void setNome(string new_nome);
        void setDuracao(string new_duracao);
        void setEpsodio(Epsodio ep); // aqui tbm tem algo estranho. alguem com um entendimento melhor verifica
        // setN_Temporada(int n); acho desnecessario, pois isso ficaria a cargo de uma criação de uma nova temporada

        virtual void printSerie();
        virtual Serie getSerie();
};