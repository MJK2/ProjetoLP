#ifndef DOCUMENTARIO_H
#define DOCUMENTARIO_H

#include "video.h"

using namespace std;

class Documentario : Video{
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

    private:
        string diretor;
};

#endif