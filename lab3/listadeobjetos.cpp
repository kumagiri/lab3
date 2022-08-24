#include "listadeobjetos.h"
#include <iostream>
#include "objeto.h"

using namespace std;

listadeobjetos::listadeobjetos()
{
   lista=new Objeto[5];
}

void listadeobjetos::crearLista(int tam){
    tam_max=tam;
    lista=new Objeto[tam_max];


}

void listadeobjetos::llenar(){

    lista[contador].crearObjeto();
    contador++;
}
void listadeobjetos::mostrar_elemento(int elemento){

    this->elemento=elemento;
    cout<<"El objeto seleccionado es: \n";
    cout<<"Numero serial: "<<lista[elemento].getserial()<<endl;
    cout<<"Categoria: "<<lista[elemento].getcategoria()<<endl;


}


