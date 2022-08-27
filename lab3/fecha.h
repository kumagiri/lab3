#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <string>

using namespace std;

class fecha
{
private:
    int ano=0;
    int mes_n=0;
    string mes_l;
    int dia=0;
    int hora=0;
    int min=0;

public:
    fecha();
    fecha(int,int,int,int,int);
    fecha(int,string,int,int,int);
    int verificarAno(int);
    int verificarMes(int);
    string verificarMes(string);
    int verificarDia(int);
    int verificarHora(int);
    int verificarMinutos(int);
    void getAno();
    void getMes();
    void getdia();
    void gethora();
    void getMinutos();

};

#endif // FECHA_H
