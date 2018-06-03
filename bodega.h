#ifndef BODEGA_H
#define BODEGA_H

#include<iostream>
#include<string>
#include<vector>
#include "ingredientes.h"
using namespace std;
using std::string;

class bodega{
    private:
        

    public:
      vector<ingredientes*> v_ingredientes;
      bodega();
        bodega(ingredientes*);
        //get
        ingredientes* getingredientes(int);
        //set
        void setingredientes(ingredientes*);


        
};
#endif