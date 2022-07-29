#include <iostream>
#include <cstring>
#include "proceso.h"

using namespace std;

int main()
{
    int n=0,opcion=0;
    //char categoria[15]="carla";
    char **lista=new char*[n];
    char **copia=new char*[n];
    reservarFilas(lista,n);
    reservarFilas(copia,n);


    while (opcion!=3) {

        cout<<"****MENU****"<<endl;
        cout<<"1.nuevo registro."<<endl;
        cout<<"2.visializar registro."<<endl;
        cout<<"3.salir."<<endl;
        cin>>opcion;

        if(opcion==1){

            if(n!=0){
                cout.flush();
                delete [] lista;
                lista=new char *[n];
                reservarFilas(lista,n);
                copiaMatriz(lista,copia,n-1);
                //delete [] copia;
                copia=new char *[n];
                reservarFilas(copia,n);
            }

            nuevoRegistro(lista,n);
            copiaMatriz(copia,lista,n);

            n++;
        }
        else if(opcion==2){
            imprimirMatriz(lista, n-1);
        }

        else if(opcion==3){
            liberarMemoria(copia,n);

        }
        else {
            cout<<"opcion incorrecta"<<endl;
        }

    }


    delete [] lista;

    return 0;
}

//    if(categoriaRepetida(lista,categoria,n)==true){
//        cout<<"dato repetido";
//    }
//    liberarMemoria(lista,n-1);
//    lista=new char*[n];
//    reservarFilas(lista,n);
//    copiaMatriz(lista,copia,n-1);
//    liberarMemoria(copia,n-1);
//    copia=new char *[n];
//    reservarFilas(copia,n);
