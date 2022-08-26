#include "menus.h"
#include <iostream>

using namespace std;

int menu_inicial(){
    int a=0;
    cout<<"A que aplicacion deceas acceder: \n "
          "1.listas de objetos\n "
          "2.Agenda de citas y compromisos\n "
          "3.Stack\n "
          "4.Salir";
    cin>>a;
    return a;
}

int menu_1(){
    int a;
    cout<<"Que deceas hacer: \n "
          "1.crear lista\n "
          "2.agregar objeto a alguna lista\n "
          "3.ver\n "
          "4.Regresar\n "
          "5.Salir: ";
    cin>>a;
    return a;

}
int menu_1_2(){
    int a;
    cout<<"Que deceas hacer: \n "
          "1.ver objeto\n "
          "2.ver lista\n "
          "3.ver tamano de una lista\n "
          "4.Regresar\n "
          "5.Salir: ";
    cin>>a;
    return a;

}
