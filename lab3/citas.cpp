#include "citas.h"
#include "fecha.h"
#include <iostream>
#include <string>

using namespace std;
citas::citas()
{


}

 citas::citas(string _nombre1,string _nombre2,string _lugar){
    nombre1=_nombre1;
    nombre2=_nombre2;
    lugar=_lugar;

    diaCita.llenar();
}
void citas::getnombre1(){
    cout<<nombre1;
}
void citas::getnombre2(){
    cout<<nombre2;
}

void citas::getlugar(){
     cout<<lugar;
}
void citas::fechadelevento(){
    int anio=0,dia=0;
    string mes;
    anio=diaCita.getAnio();
    mes=diaCita.getMes();
    dia=diaCita.getdia();
    cout<<anio<<"/"<<mes<<"/"<<dia;
}

void citas::horaDelEvento(){
    int hora=0,minutos=0;
    hora=diaCita.gethora();
    minutos=diaCita.getMinutos();
    cout<<hora<<":"<<minutos;
}
