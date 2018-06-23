#include "Personas.h"


Personas::Personas(){

}
//constructor sobrecargado
Personas::Personas(string pNombre, string pGenero, string pColorDeCabello, string pColorDeOjos, string pColorDePiel, bool pFertil){
     nombre=pNombre;
     genero=pGenero;
     colordecabello=pColorDeCabello;
     colordeojos=pColorDeOjos;
     colordepiel=pColorDePiel;
     fertil=pFertil;
}
   //getter
string Personas::getNombre(){
  return nombre;
}
   string Personas::getGenero(){
     return genero;
   }
   string Personas::getColorDePiel(){
     return colordepiel;
   }
   string Personas::getColorDeCabello(){
     return colordecabello;
   }
   string Personas::getColorDeOjos(){
     return colordeojos;
   }
   bool Personas::getFertil(){
     return fertil;
   }

   //setter
   void Personas::setNombre(string n){
     nombre=n;
   }
   void Personas::setGenero(string g){
     genero=g;
   }
   void Personas::setColorDePiel(string piel){
     colordepiel=piel;
   }
   void Personas::setColorDeCabello(string cabello){
     colordecabello=cabello;
   }
   void Personas::setColorDeOjos(string ojos){
     colordeojos=ojos;
   }
   void Personas::setFertil(bool fer){
     fertil=fer;
   }
   Personas Personas:: operator +(Personas& val){
     int numeroran;
     int probabilidadembarazo;
     int probabilidadhom;
     Personas personas;
     probabilidadembarazo= rand()%5+1;
     if(probabilidadembarazo==2){
       probabilidadhom = rand()%2+1;
       if(probabilidadhom==1){
         personas.setGenero("hombre");
       }else{
         personas.setGenero("mujer");
       }
       if(this->getGenero()=="hombre"){
         personas.setNombre(this->getNombre()+" -hijo");

       }else if(val.getGenero()=="hombre"){
         personas.setNombre(val.getNombre()+" -hijo");
       }
       if(this->getGenero()=="mujer"){
         personas.setNombre(this->getNombre()+" -hija");
       }else if(val.getGenero()=="mujer"){
         personas.setNombre(val.getNombre()+" -hija");

       }
       //color de ojos
       if(this->getColorDeOjos()=="cafe"&&val.getColorDeOjos()=="verde"){
         personas.setColorDeOjos("cafe");
       }else if(this->getColorDeOjos()=="cafe"&&val.getColorDeOjos()=="rosado"){
         personas.setColorDeOjos("cafe");
       }else if(this->getColorDeOjos()=="verde"&&val.getColorDeOjos()=="rosado"){
         personas.setColorDeOjos("verde");
       }else if(this->getColorDeOjos()=="cafe"&&val.getColorDeOjos()=="cafe"){
         personas.setColorDeOjos("cafe");
       }else if(this->getColorDeOjos()=="verde"&&val.getColorDeOjos()=="verde"){
         personas.setColorDeOjos("verde");
       }else if(this->getColorDeOjos()=="rosado"&&val.getColorDeOjos()=="rosado"){
         personas.setColorDeOjos("rosado");
       }
       //color de cabello
       if(this->getColorDeCabello()=="negro"&&val.getColorDeCabello()=="rojo"){
         personas.setColorDeCabello("negro");
       }else if(this->getColorDeCabello()=="blanco"&&val.getColorDeCabello()=="rojo"){
         personas.setColorDeCabello("rojo");
       }else if(this->getColorDeCabello()=="negro"&&val.getColorDeCabello()=="blanco"){
         personas.setColorDeCabello("negro");
       }else if(this->getColorDeCabello()=="negro"&&val.getColorDeCabello()=="negro"){
         personas.setColorDeCabello("negro");
       }else if(this->getColorDeCabello()=="blanco"&&val.getColorDeCabello()=="blanco"){
         personas.setColorDeCabello("blanco");
       }else if(this->getColorDeCabello()=="rojo"&&val.getColorDeCabello()=="rojo"){
         personas.setColorDeCabello("rojo");
       }

       //color de piel
       if(this->getColorDePiel()=="negro"&&val.getColorDePiel()=="blanco"){
         personas.setColorDePiel("negro");
       }else if(this->getColorDePiel()=="moreno"&&val.getColorDePiel()=="negro"){
         personas.setColorDePiel("negro");
       }else if(this->getColorDePiel()=="moreno"&&val.getColorDePiel()=="blanco"){
         personas.setColorDePiel("moreno");
       }else if(this->getColorDePiel()=="moreno"&&val.getColorDePiel()=="moreno"){
         personas.setColorDePiel("moreno");
       }else if(this->getColorDePiel()=="blanco"&&val.getColorDePiel()=="blanco"){
         personas.setColorDePiel("blanco");
       }else if(this->getColorDePiel()=="negro"&&val.getColorDePiel()=="negro"){
         personas.setColorDePiel("negro");
       }
     }


  return personas;


  }
   Personas Personas::operator*(Personas& val){
     int numeroran;
     int probabilidadembarazo;
     int probabilidadhom;
     Personas personas;
     numeroran = rand() % 100 +1;
     if(numeroran==1 && this->getFertil()==true&&val.getFertil()==true){
        probabilidadembarazo= rand()%5+1;
        if(probabilidadembarazo==2){
          probabilidadhom = rand()%2+1;
          if(probabilidadhom==1){
            personas.setGenero("hombre");
          }else{
            personas.setGenero("mujer");
          }
          if(this->getGenero()=="hombre"){
            personas.setNombre(this->getNombre()+" -hijo");

          }else if(val.getGenero()=="hombre"){
            personas.setNombre(val.getNombre()+" -hijo");
          }else
          if(this->getGenero()=="mujer"){
            personas.setNombre(this->getNombre()+" -hija");
          }else if(val.getGenero()=="mujer"){
            personas.setNombre(val.getNombre()+" -hija");

          }
          //color de ojos
          if(this->getColorDeOjos()=="cafe"&&val.getColorDeOjos()=="verde"){
            personas.setColorDeOjos("cafe");
          }else if(this->getColorDeOjos()=="cafe"&&val.getColorDeOjos()=="rosado"){
            personas.setColorDeOjos("cafe");
          }else if(this->getColorDeOjos()=="verde"&&val.getColorDeOjos()=="rosado"){
            personas.setColorDeOjos("verde");
          }else if(this->getColorDeOjos()=="cafe"&&val.getColorDeOjos()=="cafe"){
            personas.setColorDeOjos("cafe");
          }else if(this->getColorDeOjos()=="verde"&&val.getColorDeOjos()=="verde"){
            personas.setColorDeOjos("verde");
          }else if(this->getColorDeOjos()=="rosado"&&val.getColorDeOjos()=="rosado"){
            personas.setColorDeOjos("rosado");
          }
          //color de cabello
          if(this->getColorDeCabello()=="negro"&&val.getColorDeCabello()=="rojo"){
            personas.setColorDeCabello("negro");
          }else if(this->getColorDeCabello()=="blanco"&&val.getColorDeCabello()=="rojo"){
            personas.setColorDeCabello("rojo");
          }else if(this->getColorDeCabello()=="negro"&&val.getColorDeCabello()=="blanco"){
            personas.setColorDeCabello("negro");
          }else if(this->getColorDeCabello()=="negro"&&val.getColorDeCabello()=="negro"){
            personas.setColorDeCabello("negro");
          }else if(this->getColorDeCabello()=="blanco"&&val.getColorDeCabello()=="blanco"){
            personas.setColorDeCabello("blanco");
          }else if(this->getColorDeCabello()=="rojo"&&val.getColorDeCabello()=="rojo"){
            personas.setColorDeCabello("rojo");
          }

          //color de piel
          if(this->getColorDePiel()=="negro"&&val.getColorDePiel()=="blanco"){
            personas.setColorDePiel("negro");
          }else if(this->getColorDePiel()=="moreno"&&val.getColorDePiel()=="negro"){
            personas.setColorDePiel("negro");
          }else if(this->getColorDePiel()=="moreno"&&val.getColorDePiel()=="blanco"){
            personas.setColorDePiel("moreno");
          }else if(this->getColorDePiel()=="moreno"&&val.getColorDePiel()=="moreno"){
            personas.setColorDePiel("moreno");
          }else if(this->getColorDePiel()=="blanco"&&val.getColorDePiel()=="blanco"){
            personas.setColorDePiel("blanco");
          }else if(this->getColorDePiel()=="negro"&&val.getColorDePiel()=="negro"){
            personas.setColorDePiel("negro");
          }
        }
     }
     return personas;

   }
