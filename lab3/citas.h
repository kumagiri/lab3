#ifndef CITAS_H
#define CITAS_H
#include <iostream>
#include <string>
#include "fecha.h"
using namespace std;
class citas
{
private:
    string nombre1,nombre2,lugar;
    fecha diaCita;

public:
    citas();
    citas(string,string,string);
    void mostrarCita();
};

#endif // CITAS_H
