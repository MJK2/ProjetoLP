#ifndef DOCUMENTARIO_H
#define DOCUMENTARIO_H

#include "video.h"
#include "categoria.h"

class Documentario : Video{
    public:
        Documentario();
        Documentario(int new_id,
                     string new_nome,
                     string new_descricao,
                     string new_duracao,
                     vector<string> categoria,
                     Date new_data_lancamento,
                     string diretor);

        void printVideo() override;
        Video getVideo();
        string getDiretor();
        void setDiretor(string new_diretor);

    private:
        string diretor;
};

#endif