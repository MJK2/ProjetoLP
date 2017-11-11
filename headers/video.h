#include <string>

using namespace std;

class Video{
    protected:
        int id;
        string nome;
        string categoria;
        string duracao;

    public:  
        int getId();
        string getNome();
        string getDuracao();

        void setId(int new_id);
        void setNome(string new_nome);
        void setDuracao(string new_duracao);

        void deleteVideo();
        void printVideo();
};