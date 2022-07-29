#include "proceso.h"
#include <iostream>
#include <cstring>
using namespace std;

void reservarFilas(char **p, int n)
{
    for (int i=0;i<n+1;i++ ) {
        p[i]=new char [15];
    }
}

void nuevoRegistro(char **p, int n)
{
    cout<<"nuevo categoria: ";
    cin>>p[n];
}

void imprimirMatriz(char **p, int n)
{
        for (int i=0;i<n+1;i++ ) {
            cout<<p[i]<<endl;
        }
}

void liberarMemoria(char **p, int n)
{
    for(int i=0;i<n+1;i++){
        delete [] p[i];
    }
    delete []p;
}

void copiaMatriz(char **copia, char **original, int n)
{
    for(int i=0;i<n+1;i++){
        copia[i]=original[i];
    }
}

bool categoriaRepetida(char **lista, char categoria[], int n)
{
    bool iso=false;

    for (int i=0;i<n+1 ;i++ ) {

        if(strlen(lista[i])==strlen(categoria)){
            for(int j=0;j<int(strlen(lista[i]));j++){
                if(lista[i][j]!=categoria[j]){
                    iso=true;
                }
            }
        }

    }
    return iso;
}
