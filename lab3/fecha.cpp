#include "fecha.h"
#include <iostream>
#include <string>

using namespace std;
fecha::fecha()
{

}
void fecha::llenar(){
    bool verdad=false;
    bool bisiesto=false;
    do{//año
        int _anio=0;
        cout<<"Por favor ingrese el año en el que se desarrollara la cita\n: ";
        cin>>_anio;
        verdad=verificarAnio(_anio);
        bisiesto=anio_bisiesto(_anio);

    }while(verdad==false);


    do{//mes incluye los dos metodos
        verdad=false;
        int mesn=0,metodo=0;
        string mesl;
        cout<<"En que formato desea ingresar el mes"
              "1.letra\n"
              "2.numero: ";
        cin>>metodo;
        if(metodo==1){
        cout<<"Por favor ingrese el mes en el que se desarrollara la cita\n"
              "recuerde hacerlo en letras minusculas";
        cin>>mesl;
        verdad=verificarMes(mesl);

        }
        else if(metodo==2){
            cout<<"Por favor ingrese el mes en el que se desarrollara la cita\n"
                  "recuerde hacerlo con los numeros de cada mes del 1 al 12";
            cin>>mesn;
            verdad=verificarMes(mesn);
            if(verdad==true){
                cambioMes(mesn);

            }
        }
    }while(verdad==false);

    do{//dia
     int _dia=0;
     verdad=false;
     cout<<"Por favor ingrese el dia de la cita recuerde\n"
           "hacerlo deacuerdo al mes en el que es la cita";
     cin>>_dia;
     verdad= verificarDia(_dia,bisiesto);

    }while(verdad==true);


    do{//hora
        int _hora;
        verdad=false;
        cout<<"Por favor ingrese la hora de la cita en el formato de 24 horas: ";
        cin>>_hora;
        verdad=verificarHora(_hora);
    }while(verdad==false);

    do{//minutos
        verdad=false;
        int _min=0;
        cout<<"Por favor ingresa los minutos en el que se dara la cita: ";
        cin>>_min;
        verdad=verificarMinutos(_min);

    }while (verdad==false);



}



bool fecha::verificarAnio(int _anio){
    bool verdad=false;
    if(_anio>2021 and _anio<3000){
        verdad=true;
        anio=_anio;
    }
    else{
        system("cls");
        cout<<"Recuerda que el ano debe estar entre 1 y 12\n";
    }

    return verdad;
}
bool fecha::anio_bisiesto(int _anio){
    bool verdad=false;
    if(_anio%4==0 and _anio%100!=0 or _anio%400==0){
        verdad=true;
    }
    return verdad;
}

bool fecha::verificarMes(int _mes_n){
    bool verdad=false;
    if(_mes_n>0 and _mes_n<13){
        verdad=true;
    }
    else{
        system("cls");
        cout<<"Recuerda que el mes debe estar entre 1 y 12\n";
    }

    return verdad;
}

bool fecha::verificarMes(string mesl){
    bool verdad=false;
    if (mesl=="Enero" or mesl=="enero"){
        mes_l=mesl;
        mes_n=1;
        verdad=true;
    }
    else if (mesl=="Febrero" or mesl=="febrero"){
        mes_l=mesl;
        mes_n=2;
        verdad=true;
    }
    else if (mesl=="Marzo" or mesl=="marzo"){
        mes_l=mesl;
        mes_n=3;
        verdad=true;
    }
    else if (mesl=="Abril" or mesl=="abril"){
        mes_l=mesl;
        mes_n=4;
        verdad=true;
    }
    else if (mesl=="Mayo" or mesl=="mayo"){
        mes_l=mesl;
        mes_n=5;
        verdad=true;
    }
    else if (mesl=="Junio" or mesl=="junio"){
        mes_l=mesl;
        mes_n=6;
        verdad=true;
    }
    else if (mesl=="Julio" or mesl=="julio"){
        mes_l=mesl;
        mes_n=7;
        verdad=true;
    }
    else if (mesl=="Agosto" or mesl=="agosto"){
        mes_l=mesl;
        mes_n=8;
        verdad=true;
    }
    else if (mesl=="Septiembre" or mesl=="septiembre"){
        mes_l=mesl;
        mes_n=9;
        verdad=true;
    }
    else if (mesl=="Octubre" or mesl=="octubre"){
        mes_l=mesl;
        mes_n=10;
        verdad=true;
    }
    else if (mesl=="Noviembre" or mesl=="noviembre"){
        mes_l=mesl;
        mes_n=11;
        verdad=true;
    }
    else if (mesl=="Diciembre" or mesl=="diciembre"){
        mes_l=mesl;
        mes_n=12;
        verdad=true;
    }
    else{
        cout<<"el mes indicado no es correcto\n";
        system("cls");
    }

    return verdad;
}

bool fecha::verificarDia(int _dia, bool bisiesto){
    int es=0;
    bool verdad=false;
    es=tipoMes();
    if(es==1){
        if(_dia>0 and _dia<=31){
            verdad=true;
            dia=_dia;
        }
        else{
            system("cls");
            cout<<"El mes que has escogido es de 31 dias\n";
        }
    }
    else if(es==2){
        if(_dia>0 and _dia<=30){
            verdad=true;
            dia=_dia;
        }
        else{
            system("cls");
            cout<<"El mes que has escogido es de 30 dias\n";
        }
    }
    else if(es==3){
        if(bisiesto==true){
            if(dia>0 and dia<=29){
                verdad=true;
                dia=_dia;
            }
            else{
                system("cls");
                cout<<"El año que has escogido es bisiesto\n"
                      "y como tal tiene 29 dias";
            }
        }
        else{
            if(_dia>0 and _dia<=28){
                verdad=true;
                dia=_dia;
            }
            else{
                system("cls");
                cout<<"El mes que has escogido es de 28 dias\n";
            }
        }
    }

  return verdad;
}

bool fecha::verificarHora(int _hora){
    bool verdad=false;
    if(_hora>0 and _hora<=24){
        verdad=true;
        hora=_hora;
    }
    else{
        system("cls");
        cout<<"Recuerde que el formato hora solo admite horas de 1 a 24\n";
    }
    return verdad;
}

bool fecha::verificarMinutos(int _min){
    bool verdad=false;
    if(_min>0 and _min<=60){
        verdad=true;
        min=_min;
    }
    else{
        system("cls");
        cout<<"Recuerde que el formato de los minutos solo admiten numeros de 1 a 60\n";
    }
    return verdad;
}

int fecha::tipoMes(){
    int es=0;
    switch (mes_n) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        es=1;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        es=2;
        break;

    case 2:{
        es=3;
        break;
    }
    }
    return es;
}

void fecha::cambioMes(int mesn){
    string _mes;
    switch (mesn) {
    case 1:{
        mes_l="enero";
        break;
    }
    case 2:{
        mes_l="febrero";
        break;
    }
    case 3:{
        mes_l="marzo";
        break;
    }
    case 4:{
        mes_l="abril";
        break;
    }
    case 5:{
        mes_l="mayo";
        break;
    }
    case 6:{
        mes_l="junio";
        break;
    }
    case 7:{
        mes_l="juio";
        break;
    }
    case 8:{
        mes_l="agosto";
        break;
    }
    case 9:{
        mes_l="septiembre";
        break;
    }
    case 10:{
        mes_l="octubre";
        break;
    }
    case 11:{
        mes_l="noviembre";
        break;
    }
    case 12:{
        mes_l="diciembre";
        break;
    }
    }
}

int fecha::getAnio(){
    return anio;
}
string fecha::getMes(){
    return mes_l;
}
int fecha::getdia(){
    return dia;
}
int fecha::gethora(){
    return hora;
}
int fecha::getMinutos(){
    return min;
}
