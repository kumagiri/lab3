#ifndef OBJETO_H
#define OBJETO_H
#include <iostream>
#include <string>
using namespace std;

class Objeto
{
private:
    int serial=0;
    string categoria;

public:


    Objeto();
    ~Objeto();
    void crearObjeto();
    void setserial(int _serial);
    void setcategoria(string _categoria);
    int getserial();
    string getcategoria();

};

#endif // OBJETO_H
