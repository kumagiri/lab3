#ifndef CREADORCITAS_H
#define CREADORCITAS_H
#include "citas.h"


class creadorcitas
{
private:


     citas lista1[10];


public:
    static int contador;
    creadorcitas();
    void llenarcita();
    void verCita(int);

};

#endif // CREADORCITAS_H
