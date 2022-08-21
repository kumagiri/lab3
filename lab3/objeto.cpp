#include "objeto.h"
#include<cstdlib>
#include<stdlib.h>

Objeto::Objeto(){
    serial=0;
    categoria="a";

}
Objeto::Objeto(int _serial,string _categoria){
    serial=_serial;
    categoria=_categoria;
}


Objeto::~Objeto(){


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



