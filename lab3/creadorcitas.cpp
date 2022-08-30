#include "creadorcitas.h"
#include "citas.h"
#include "fecha.h"
#include <iostream>
#include <string>

using namespace std;
int creadorcitas::contador=0;
creadorcitas::creadorcitas()
{

}

void creadorcitas::llenarcita(){
    string nombre1,nombre2,lugar;
    cout<<"Introdusca el nombre del primer participante de la cita: ";
    cin>>nombre1;
    cout<<"Introdusca el nombre del segundo participante de la cita: ";
    cin>>nombre2;
    cout<<"Introdusca el lugar acordado para la cita: ";
    cin>>lugar;
    lista1[contador]=citas(nombre1,nombre2,lugar);
    contador++;

}

void creadorcitas::verCita(int num){
    int numero=num;
    cout<<"La cita se realizara entre ";
    lista1[numero].getnombre1();
    cout<<" y ";
    lista1[numero].getnombre2();
    cout<<endl;
    cout<<"El encuentro se realizara el dia: ";
    lista1[numero].fechadelevento();
    cout<<endl;
    cout<<"La hora del evento es: ";
    lista1[numero].horaDelEvento();
    cout<<endl;
}
