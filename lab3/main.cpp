#include <iostream>
#include "objeto.h"
#include "listadeobjetos.h"
using namespace std;

int main()
{
    listadeobjetos a1;
    a1.crearLista(5);
    a1.llenar();
    system("cls");
    a1.mostrar_elemento(0);
    a1.llenar();
    system("cls");
    a1.mostrar_elemento(1);
    a1.mostrar_elemento(0);
    return 0;
}
