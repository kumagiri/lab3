#include <iostream>
#include "objeto.h"
#include "listadeobjetos.h"
#include "menus.h"
using namespace std;

int main()
{
    int sel=0,num=0;
    bool bandera=0;
    do{
        sel=0;
        sel=menu_inicial();

        if(sel==1){
            system("cls");
            bool bandera1=0;
            int tam_max=0;
            listadeobjetos enumeracion[5];
            sel=0;
            do{
            sel=menu_1();
            if(sel==1){
                if(num<5){
                   system("cls");
                   cout<<"Por favor ingrese el tamano de la lista: ";
                   cin>>tam_max;
                   enumeracion[num].crearLista(tam_max);
                   num++;
                }

                else{
                    cout<<"Ya no se pueden crear mas listas\n";
                }

            }
            else if (sel==2){
                int lista=0;
                cout<<"Por favor ingrese el numero de la lista\n "
                      "a la que decea acceder del 1 a 5: ";
                cin>>lista;
                lista-=1;
                enumeracion[lista].llenar();


            }
            else if (sel==3){
                system("cls");
                sel=0;
                sel=menu_1_2();
                if(sel==1){
                    int lista=0,obj=0;
                    cout<<"Por favor ingrese el numero de la lista de la que quiere el objeto";
                    cin>>lista;
                    lista-=1;
                    cout<<"el tamano de la lista selecccionada es: "<<enumeracion[lista].gettamano()<<endl;
                    cout<<"Por favor ingrese el objeto que desea ver: ";
                    cin>>obj;
                    obj-=1;
                    enumeracion[lista].mostrar_elemento(obj);

                }
                else if(sel==2){

                }
                else if(sel==3){

                }
                else if(sel==4){

                }
                else if(sel==5){

                }

            }
            else if (sel==4){
            bandera1=1;
            system("cls");
            }
            else if(sel==5){
                exit(1);
            }
            else{
                system("cls");

                cout<<"la opcion ingresada no es valida \n";
            }
            }while(bandera1==0);
            /* listadeobjetos a1;
             a1.crearLista(5);
             a1.llenar();
             system("cls");
             a1.mostrar_elemento(0);
             a1.llenar();
             system("cls");
             a1.mostrar_elemento(1);
             a1.mostrar_elemento(0);*/

        }
        else if (sel==2){

        }
        else if (sel==3){

        }
        else if (sel==4){
        bandera=1;
        }
        else{
            system("cls");

            cout<<"la opcion ingresada no es valida \n";

        }




    }while(bandera==0);

    return 0;
}
