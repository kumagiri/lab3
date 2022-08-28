#include "fecha.h"
#include <iostream>
#include <string>

using namespace std;
fecha::fecha()
{

}
void fecha::llenar(){
    bool verdad=false;
    do{
        int _anio=0;
        cout<<"Por favor ingrese el año en el que se desarrollara la cita\n: ";
        cin>>_anio;
        verdad=verificarAnio(_anio);

    }while(verdad==false);
    verdad=false;

    do{
        int mesn=0,metodo=0;
        string mesl;
        cout<<"En que formato desea ingresar el mes"
              "1.letra\n"
              "2.numero: ";
        cin>>metodo;
        if(metodo==1){
        cout<<"Por favor ingrese el mes en el que se desarrollara la cita\n"
              "recuerde hacerlo to en letras minusculas";
        cin>>mesl;
        verdad=verificarMes(mesn);
        }
    }while(verdad==false);

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
    if(_mes_n>0 and mes_n<13){
        verdad=true;
    }
    else{
        system("cls");
        cout<<"Recuerda que el mes debe estar entre 1 y 12\n";
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
        }
        else{
            system("cls");
            cout<<"El mes que has escogido es de 31 dias\n";
        }
    }
    else if(es==2){
        if(_dia>0 and _dia<=30){
            verdad=true;
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
    case (1,3,5,7,8,10,12):{

        es=1;
        break;
    }
    case (4,6,9,11):{

        es=2;
        break;
    }
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
void fecha::cambioMes(string mesl){


    switch (mesl) {
    case 'enero':{
        mes_n=1;
        break;
    }
    case "febrero":{
        mes_n=2;
        break;
    }
    case "marzo":{
        mes_n=3;
        break;
    }
    case "abril":{
        mes_n=4;
        break;
    }
    case "mayo":{
        mes_n=5;
        break;
    }
    case "junio":{
        mes_n=6;
        break;
    }
    case "julio":{
        mes_n=7;
        break;
    }
    case "agosto":{
        mes_n=8;
        break;
    }
    case "septiembre":{
        mes_n=9;
        break;
    }
    case "octubre":{
        mes_n=10;
        break;
    }
    case "noviembre":{
        mes_n=11;
        break;
    }
    case "diciembre":{
        mes_n=12;
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
