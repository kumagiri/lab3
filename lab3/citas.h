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
    fecha *diaCita;

public:
    citas();
    void cita(string,string,string);
    void getnombre1();
    void getnombre2();
    void getlugar();
    void fechadelevento();
    void horaDelEvento();
};

#endif // CITAS_H
