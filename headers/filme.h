/*
 *@file filme.h
 */

#ifndef FILME_H
#define FILME_H

#include "video.h"
#include "categoria.h"

class Filme : Video
{
  public:
    Filme();

    void printVideo();
    void setVideo();
    Video getVideo();

  private:
    string diretor;
    vector<string> elenco;
};

#endif