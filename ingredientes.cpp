#include "ingredientes.h"

#include <iostream>
#include <string>
using namespace std;

ingredientes::~ingredientes(){
    
}

ingredientes::ingredientes(string pnombre,int pcantidad,string ptipo,int pcantdiad_sabor,int pduracion){
    nombre=pnombre;
    pcantidad=cantidad;
    tipo=ptipo;
    cantidad_sabor=pcantdiad_sabor;
    duracion=pduracion;
}
//get y set
string ingredientes::getnombre(){
    return nombre;

}
void ingredientes::setnombre(string pnombre){
    nombre=pnombre;
}
int ingredientes::getcantidad(){
    return cantidad;

}
void ingredientes::setcantidad(int pcantidad){
    cantidad=pcantidad;
}
string ingredientes::gettipo(){
    return tipo;
}
void ingredientes::settipo(string ptipo){
    tipo=ptipo;
}
int ingredientes::getcantidad_sabor(){
    return cantidad_sabor;

}
void ingredientes::setcantidad_sabor(int pcantdiad_sabor){
    cantidad_sabor=pcantdiad_sabor;
}
int ingredientes::getduracion(){
    return duracion;
}
void ingredientes::setduracion(int pduracion){
    duracion=pduracion;
}
