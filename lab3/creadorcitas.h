#ifndef CREADORCITAS_H
#define CREADORCITAS_H
#include "citas.h"
class creadorcitas
{
private:


    static citas lista[10];
    static int contador;

public:
    creadorcitas();
    void llenarcita();
    void verCita();

};

#endif // CREADORCITAS_H
