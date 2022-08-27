#ifndef LISTADEOBJETOS_H
#define LISTADEOBJETOS_H
#include "objeto.h"

class listadeobjetos
{
private:

    int tam_max=0;
    Objeto *lista=nullptr;
    int contador=0;
    int elemento=0;
public:

    listadeobjetos();
    void crearLista(int);
    void llenar();
    void mostrar_elemento(int);
    int gettamano();
};

#endif // LISTADEOBJETOS_H
