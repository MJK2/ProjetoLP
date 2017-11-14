#include "video.h"
#include "categoria.h"

class Documentario : Video{
    public:
        Documentario();

        void printVideo();
        Video getVideo();

    private:
        string diretor;
};