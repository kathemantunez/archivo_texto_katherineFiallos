#include "bodega.h"
#include <iostream>
#include<string>

bodega::bodega(){

}
bodega::bodega(ingredientes* ingre) {
    v_ingredientes.push_back(ingre);
}
ingredientes* bodega::getingredientes(int i){
    return v_ingredientes[i];
}
void bodega::setingredientes(ingredientes* ingre){
    v_ingredientes.push_back(ingre);
}


