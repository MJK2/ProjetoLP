/**
* @file documentario.h
* @brief Implementação de um header referente a classe Documentario.
*/
#ifndef DOCUMENTARIO_H
#define DOCUMENTARIO_H

#include "video.h"

using namespace std;

/// Classe que representa um Documentario. Herda de Video.
class Documentario : public Video{
    public:
        /// Construtor vazio de Documentario.
        Documentario();
        /// Construtor parametrizado de Documentario.
        Documentario(string new_nome,
                     string new_descricao,
                     string new_duracao,
                     vector<string> categoria,
                     string new_data_lancamento,
                     string diretor);

        /// Sobrecarrega o metodo printVideo(), que pertence a classe pai Video. Imprime todas as informacoes de um Documentario.
        void printVideo() override;
        /// @return Um objeto Video, por meio de poliformismo, sera um objeto Documentario.
        /// @brief Retorna um objeto documentario.
        Video getVideo();
        /// @return O diretor do documentario.
        /// @brief O novo diretor de um documentario.
        string getDiretor();
        /// @param new_diretor o novo diretor de um documentario.
        /// @brief Insere um novo diretor para um documentario.
        void setDiretor(string new_diretor);
        /// @return todas as informacoes de um documentario em uma string.
        /// @brief Concatena todas as informacoes de um documentario em uma unica string para persistir dados no arquivo documentario.dat
        string writeDocumentario();
        /// Insere novas informacoes em um Documentario.
        void setVideo(
            string new_nome,
            string new_descricao,
            string new_duracao,
            vector<string> new_categoria,
            string new_data_lancamento,
            string diretor);
        

    private:
        /// O diretor de um documentario.
        string diretor;
};

#endif