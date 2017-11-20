#ifndef DOCUMENTARIO_H
#define DOCUMENTARIO_H

#include "video.h"
#include "categoria.h"

class Documentario : Video{
    public:
        
        void printVideo();
        Video getVideo();
        string getDiretor();
        void setDiretor();

    private:
        string diretor;
};

#endif