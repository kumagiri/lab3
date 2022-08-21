#include <iostream>
#include "objeto.h"
using namespace std;

int main()
{

    Objeto* colleccion=new Objeto();

    colleccion->setserial(10000);
    colleccion->setcategoria("hola");

    cout<<"serial: "<<colleccion->getserial()<<endl;
    cout<<"categoria: "<<colleccion->getcategoria()<<endl;
    return 0;
}
