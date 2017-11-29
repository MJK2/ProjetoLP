#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

struct Date{
    private:
        int dia;
        int mes;
        int ano;
    public:
        Date(){
            this->dia = 0;
            this->mes = 0;
            this->ano = 0;
        }

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

        string toString(){
            string data = to_string(this->dia) + "/" + to_string(this->mes) + "/" + to_string(this->ano);
            return data;
        }
};

#endif