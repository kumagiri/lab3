#ifndef LISTADEOBJETOS_H
#define LISTADEOBJETOS_H
#include "objeto.h"

class listadeobjetos
{
private:
    Objeto* lista=nullptr;
    int contador=0;
public:
    listadeobjetos();
    void crear_lista(int);
    void llenar();
    void mostrar_elemento(int,int);
    void mostrar_lista(int);
    void numero_de_objetos(int);
};

#endif // LISTADEOBJETOS_H
