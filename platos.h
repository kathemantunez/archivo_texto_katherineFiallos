#ifndef PLATOS_H
#define PLATOS_H

#include<iostream>
#include<string>
#include<vector>
#include "ingredientes.h"
using namespace std;
using std::string;

class platos{
    private:

        vector<ingredientes*> v_ingredientes;//cantdiad de ingredinetes
        string resena;
        int cantidad_sabor=0;
        int registro=0;
        int precio;
        int valor_promedio;
        string nombre;

    public:
       
        //~platos();
        //get
        platos(ingredientes*,string,int,int,int ,int,string );
        ingredientes* getingredientes(int);
        string getresena();
        string getnombre();
        int getcantidad_sabor();
        int getregistro();
        int getprecio();
        int getvalor_promedio();
        
        //set
        void setingredientes(ingredientes*);
        void setcantidad_sabor(int);
        void setregistro(int);
        void setprecio(int);
        void setvalor_promedio(int);
        void setnombre(string);
    
    
        
};
#endif

