
#ifndef INGREDIENTES_H
#define INGREDIENTES_H
#include <iostream>
#include <string>


using namespace std;
using std::string;

class ingredientes{
    private:
        string nombre;
        int cantidad;
        string tipo;
        int cantidad_sabor;
        int duracion;
        /*
        lo que hicimos hoy.. mandar un enlace con una modificacion. agregar un arcgivo de texto en los ingredientes
        */
    
    public:
        ingredientes(string,int,string,int,int);
        ~ingredientes();
        //get
        string getnombre();
        int getcantidad();
        string gettipo();
        int getcantidad_sabor();
        int getduracion();

        //Set
        void setnombre(string);
        void setcantidad(int);
        void settipo(string);
        void setcantidad_sabor(int);
        void setduracion(int);


};
#endif