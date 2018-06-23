#include <iostream>
#include <vector>
#include "Personas.h"

using namespace std;

int main(){
  bool seguir=true;
  vector<Personas*>lista;
  Personas* p;
  Personas per;
  while(seguir==true){
    string nombre,genero,colordecabello,colordeojos,colordepiel;
    int simu,fer,opcion,pos,persona1,persona2;
    bool fertil=false;
    cout<<"Empresa fabricadora de preservativos Dúrex"<<endl;
    cout<<"1. Agregar"<<endl;
    cout<<"2. Listar"<<endl;
    cout<<"3. Eliminar"<<endl;
    cout<<"4. Simulador"<<endl;
    cout<<"5. Salir"<<endl;
    cin>>opcion;
    switch(opcion){
      case 1:
        cout<<"Ingrese su nombre: "<<endl;
        cin>>nombre;
        cout<<"Ingrese el genero: "<<endl;
        cin>>genero;
        cout<<"Ingrese el color de cabello(negro,rojo,blanco): "<<endl;
        cin>>colordecabello;
        cout<<"Ingrese el color de ojos(cafe,verde,rosado): "<<endl;
        cin>>colordeojos;
        cout<<"Ingrese el color de piel(negro,moreno,blanco): "<<endl;
        cin>>colordepiel;
        cout<<"Ingrese si es fertil: "<<endl;
        cout<<"1. SI"<<endl;
        cout<<"2. NO"<<endl;
        cin>>fer;
        if(fer==1){
          fertil=true;
        }else{
          fertil=false;
        }
        p = new Personas(nombre,genero,colordecabello,colordeojos,colordepiel,fertil);
        lista.push_back(p);
        break;
      case 2:
        for(int i=0;i<lista.size();i++){
          cout<<lista[i]->getNombre()<<endl;

        }
        break;
      case 3:
        for(int i=0;i<lista.size();i++){
          cout<<i<<". "<<lista[i]->getNombre()<<endl;
        }
        cout<<"Ingrese la posicion que desea elminar: "<<endl;
        cin>>pos;
        lista.erase(lista.begin()+pos);
        break;
      case 4:
        cout<<"Simulacion"<<endl;
        for(int i=0;i<lista.size();i++){
          cout<<i<<". "<<lista[i]->getNombre()<<endl;
        }
        cout<<"Ingrese la primera posicion persona1: "<<endl;
        cin>>persona1;
        cout<<"Ingrese la segunda posicion de persona 2: "<<endl;
        cin>>persona2;
        cout<<"Ingrese si fue con proteccion o sin proteccion: "<<endl;
        cout<<"1. NO"<<endl;
        cout<<"2. SI"<<endl;
        cin>>simu;
        if(simu==1){
          per=*lista[persona1]+ *lista[persona2];
          lista.push_back(&per);

        }else if(simu==2){
          per=*lista[persona1]* *lista[persona2];
          lista.push_back(&per);
        }

        break;
      case 5:
        seguir=false;
        break;
    }
  }





  return 0;
}
