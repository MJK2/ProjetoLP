#include <iostream>

using namespace std;

struct Date{
    private:
        int dia;
        int mes;
        int ano;
    public:
        Date(int dia, int mes, int ano){
            this->dia = dia;
            this->mes = mes;
            this->ano = ano;
        }

        void setDate(int dia, int mes, int ano){
            this->dia = dia;
            this->mes = mes;
            this->ano = ano;
        }

        int getDia(){
            return this->dia;
        }

        int getMes(){
            return this->mes;
        }

        int getAno(){
            return this->ano;
        }

        void printDate(){
            cout << this->dia << "/" << this->mes << "/" << this->ano << endl;
        }
};