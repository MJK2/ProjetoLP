#include "video.h"
#include "categoria.h"

class Filme : Video{
    public:
        Filme();

        void printVideo();
        Video getVideo();

    private:
        string diretor;
        vector<string> elenco;
};