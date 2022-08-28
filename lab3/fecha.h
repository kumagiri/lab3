#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <string>

using namespace std;

class fecha
{
private:
    int anio=0;
    int mes_n=0;
    string mes_l;
    int dia=0;
    int hora=0;
    int min=0;

public:
    fecha();
    void llenar();
    bool verificarAnio(int);
    bool anio_bisiesto(int);
    bool verificarMes(int);
    bool verificarMes(string);
    bool verificarDia(int,bool);
    bool verificarHora(int);
    bool verificarMinutos(int);
    void cambioMes(int);

    int tipoMes();
    int getAnio();
    string getMes();
    int getdia();
    int gethora();
    int getMinutos();

};

#endif // FECHA_H
