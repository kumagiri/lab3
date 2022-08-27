#include "listadeobjetos.h"
#include <iostream>
#include "objeto.h"

using namespace std;

listadeobjetos::listadeobjetos()
{

}

void listadeobjetos::crearLista(int tam){
    tam_max=tam;
    lista=new Objeto[tam_max];


}

void listadeobjetos::llenar(){
    if (contador<tam_max){
    lista[contador].crearObjeto();
    contador++;
    }
    else{
        cout<<"la lista esta llena\n";
    }
}
void listadeobjetos::mostrar_elemento(int elemento){


    this->elemento=elemento;
    if(lista[elemento].getserial()==0){
        cout<<"el objeto que decea ver esta vacio\n";
    }
    else{
    cout<<"El objeto seleccionado es: \n";
    cout<<"Numero serial: "<<lista[elemento].getserial()<<endl;
    cout<<"Categoria: "<<lista[elemento].getcategoria()<<endl;
    }

}

int listadeobjetos::gettamano(){
    return tam_max;
}
