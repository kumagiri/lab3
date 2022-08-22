#include "objeto.h"
#include<cstdlib>
#include<stdlib.h>

Objeto::Objeto(){
    serial=0;
    categoria="a";

}



Objeto::~Objeto(){



}
void crearObjeto(){

}
void Objeto::setserial(int _serial){
    serial=_serial;
}
void Objeto::setcategoria(string _categoria){

    categoria=_categoria;
}

int Objeto::getserial(){
    return serial;
}
string Objeto::getcategoria(){
    return categoria;
}



