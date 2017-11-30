#ifndef DOCUMENTARIO_H
#define DOCUMENTARIO_H

#include "video.h"

using namespace std;

class Documentario : public Video{
    public:
        Documentario();
        Documentario(string new_nome,
                     string new_descricao,
                     string new_duracao,
                     vector<string> categoria,
                     string new_data_lancamento,
                     string diretor);

        void printVideo() override;
        Video getVideo();
        string getDiretor();
        void setDiretor(string new_diretor);
        string writeDocumentario();
        void setVideo(
            string new_nome,
            string new_descricao,
            string new_duracao,
            vector<string> new_categoria,
            string new_data_lancamento,
            string diretor);
        

    private:
        string diretor;
};

#endif