#include <iostream>
#include "objeto.h"
#include "listadeobjetos.h"
#include "creadorcitas.h"
#include "citas.h"
#include "fecha.h"
#include "menus.h"

using namespace std;

//punto 1 comienza en la linea 21
//punto 2 comienza linea 129
int main()
{
    int sel=0,num=0;
    bool bandera=0;
    do{

        sel=0;
        sel=menu_inicial();

        if(sel==1){

            bool bandera1=0;
            int tam_max=0;
            listadeobjetos enumeracion[5];
            system("cls");
            do{

            sel=0;
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
                    system("cls");
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

                sel=0;
                bool bandera2=0;
                do{
                system("cls");
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
                    cout<<endl;
                    system("cls");
                    enumeracion[lista].mostrar_elemento(obj);
                    cout<<endl;
                }
                else if(sel==2){
                    int lista=0;
                    cout<<"Que lista deceas ver recuerda hacerlo"
                          "con un numero de 1 a 5: ";
                    cin>>lista;
                    lista-=1;
                    system("cls");
                    cout<<"imprimiendo los "<<enumeracion[lista].gettamano()<<
                          " objetos \nde la lista escogida\n";
                    for(int i=0;i<enumeracion[lista].gettamano();i++){
                        cout<<"objeto numero: "<<lista+1<<endl;
                        enumeracion[lista].mostrar_elemento(i);
                    }

                }
                else if(sel==3){
                    int lista=0;
                    cout<<"De que lista deseas conocer su tamano "
                          "recuerda hacerlo con un numero de 1 a 5: ";
                    cin>>lista;
                    lista-=1;
                    cout<<"el tamano de la lista "<<lista+1<<"es: "<<enumeracion[lista].gettamano()<<endl;

                }
                else if(sel==4){
                    bandera2=1;
                }
                else if(sel==5){
                    exit(1);

                }
                }while(bandera2==0);

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


        }
        else if (sel==2){
            bool bandera2=0;
            sel=0;
            system("cls");
            do{
            sel=menu_2();
            creadorcitas nuevo;
            if(sel==1){
                nuevo.llenarcita();
            }
            else if(sel==2){
                int num;
                cout<<"cual es el numero de la cita que desea ver "
                      "recuerda es del 1 al 10: ";
                cin>>num;
                num-=1;
                nuevo.verCita(num);
            }
            else if(sel==3){

                for(int i=0;i<10;i++){
                    nuevo.verCita(i);
                }

            }
            else if(sel==4){
                bandera2=1;
            }
            else if(sel==5){
                exit(1);
            }
            }while(bandera2==false);
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
