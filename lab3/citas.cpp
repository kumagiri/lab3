#include "citas.h"
#include "fecha.h"
#include <iostream>
#include <string>

using namespace std;
citas::citas()
{

}

void citas::cita(string nombre1,string nombre2,string lugar){
    this->nombre1=nombre1;
    this->nombre2=nombre2;
    this->lugar=lugar;
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
