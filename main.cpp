#include <iostream>
#include "bodega.h"
#include "ingredientes.h"
#include "platos.h"
#include <vector>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


void ingredientesTemp();
void platos1();
void compra1();

vector<ingredientes*> v_ingredientes;
vector<platos*> v_platos;

bodega* bodega1=new bodega();
int platatitos=0;




int main(){
    bool opcion=true;
    char tecla;
    do{
        cout<<"BIENVENIDO"<<endl;
        cout<<"1. ingredientes\n2. platos\n3. compra\n4. salir"<<endl;
        cout<<"ingrese su opcion:"<<endl;
        cin>>tecla;
        switch(tecla){
            case '1':
                ingredientesTemp();
                break;
            case '2':
                platos1();
                break;
            case '3':
                compra1();
                break;
            case '4':
                opcion=false;
                break;
            default:
                cout<<"opcion incorrecta";
                break;
        }
            
    }

    while(opcion==true);
    
    return 0;
}

void ingredientesTemp(){
     ingredientes* ingre;
    char tecla;
            string nombre="";
            string tipo="";
            int cantidad_s=0,duracion=0,cantidad=0;

   
    cout<<"1.crear ingredientes\n2.listar ingredientes"<<endl;
    cin>>tecla;
    switch(tecla){
        case '1':
          
            cout<<"nombre del ingrediente:"<<endl;
            cin>>nombre;
            cout<<"tipo de ingrediente(lacteo,vegetal,gruta,otros:"<<endl;
            cin>>tipo;
            cout<<"cantidad de ingrediente:"<<endl;
            cin>>cantidad;
            cout<<"cantidad de sabor del ingrediente"<<endl;
            cin>>cantidad_s;
            cout<<"duracion del ingrediente:"<<endl;
            cin>>duracion;
            ingre=new ingredientes(nombre,cantidad,tipo,cantidad_s,duracion);
            bodega1->setingredientes(ingre);
            cout<<bodega1->v_ingredientes.size()<<endl;
           // bodega1(ingre);
            
                 
            
            

            break;
        case '2':
            for(int i=0;i<bodega1->v_ingredientes.size();i++){
                cout<<"["<<bodega1->getingredientes(i)->getnombre()<<"]";

            }
            cout<<endl;
            break;
        default:
            cout<<"opcion incorrecta"<<endl;
            break;
    }
}
void platos1(){
    platos* p;
    
    char tecla;
      int cont=0;
          string re="",nombre="";
        int sabor=0,registro=0,precio=0,valor=0;
            int op;
            bool bandera=__GCC_ATOMIC_TEST_AND_SET_TRUEVAL;
            
            char seguir;
            
    cout<<"1.crear platos\n2.listar platos"<<endl;
    cin>>tecla;
    switch(tecla){
        case '1':
          
            cout<<"nombre del plato"<<endl;
            cin>>nombre;
            cout<<"reseña:"<<endl;
            cin>>re;
            cout<<"precio:"<<endl;
            cin>>precio;
            
            //do{
                
                for(int i=0;i<bodega1->v_ingredientes.size();i++){
                cout<<cont<<".["<<bodega1->v_ingredientes->getnombre()<<"]"<<endl;
                cont++;
                }
                cout<<"ingrese los ingredientes para el platos"<<endl;
                cin>>op;
                if(op<0||op>bodega1->v_ingredientes.size()){
                    cout<<"opcion invalidad"<<endl;
                }else{
                    v_ingredientes.push_back(bodega1->v_ingredientes[op]);
                   /* if(bodega1->v_ingredientes[op]->getcantidad()>0){
                        int cant_existencia=bodega1->v_ingredientes[op]->getcantidad();
                       p=new platos(bodega1->v_ingredientes[op],reseña,bodega1->v_ingredientes[op]->;
                    v_platos.push_back(p);

                    }else{
                        cout<<"en este momento no tenemos en existencia ese ingrediente, lo sentimos"<<endl;
                    }*/
                }
               
            
          for(int i=0;v_ingredientes.size();i++){
               
               if(i=0){
                   sabor=v_ingredientes[i]->getcantidad_sabor();*/
                   p=new platos(v_ingredientes[i],re,sabor,registro,precio,valor,nombre);
                   v_platos.push_back(p);

             }

            }
              for(int i=0;v_ingredientes.size();i++){
                  delete v_ingredientes[i];
              }
              v_ingredientes.clear();

            
            
            cout<<endl;
            break;
        case '2':
            for(int i=0;i<v_platos.size();i++){
                cout<<"["<<v_platos[i]->getnombre()<<"]";

            }
            cout<<endl;
            break;

        default:
            cout<<"opcion incorrecta"<<endl;
        break;
    }
    }


void compra1(){

}

