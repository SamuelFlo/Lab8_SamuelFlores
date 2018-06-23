#ifndef PERSONAS_H
#define PERSONAS_H
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Personas{
private:
    string nombre,genero,colordecabello,colordeojos,colordepiel;
    bool fertil;

  public:
      Personas();
      Personas(string,string,string,string,string,bool);
    //getter
    string getNombre();
    string getGenero();
    string getColorDeCabello();
    string getColorDeOjos();
    string getColorDePiel();
    bool getFertil();
    //setter
    void setNombre(string);
    void setGenero(string);
    void setColorDeCabello(string);
    void setColorDeOjos(string);
    void setColorDePiel(string);
    void setFertil(bool);

    //sobrecarga
    Personas operator +(Personas&);

    Personas operator*(Personas&);


};

#endif
