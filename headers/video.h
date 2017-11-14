#include <string>
#include <vector>

using namespace std;

class Video{
    protected:
        int id;
        string nome;
        vector<string> categoria;
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

        void printVideo();
};