#include "objeto.h"
#include<cstdlib>
#include<stdlib.h>

Objeto::Objeto(){
    serial=0;
    categoria="0";

}



Objeto::~Objeto(){



}
void Objeto::crearObjeto(){

    serial=100000 + rand()%1000000;
    cout<<"Por favor ingrese la categoria: ";
    cin>>categoria;

}

int Objeto::getserial(){
    return serial;
}
string Objeto::getcategoria(){
    return categoria;
}



