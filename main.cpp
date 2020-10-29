#include <iostream>
#include "ArregloDinamico.h"      
#include "windows.h"  

using namespace std;


int main(){

    ArregloDinamico ad;
    cout<<"Agregando solo al final"<<endl;
    ad.insertar_final("Dark");
    ad.insertar_final("Souls");
    ad.insertar_final("Killer");
    ad.insertar_final("Instinct");
    ad.insertar_final("Silent");
    ad.insertar_final("Hill");
    ad.insertar_final("Resident");
    ad.insertar_final("Evil");

    for(size_t i=0; i<ad.size(); i++){
        cout << ad[i] << " ";
    }
    cout<<"\n\nAgregando al final y al inicio"<<endl;
    ad.insertar_inicio("Ivan");
    ad.insertar_inicio("Gomez");

    for(size_t i=0; i<ad.size(); i++){
        cout << ad[i] << " ";
    }

cout<<"\n\n"<<endl;

system("pause");
    return 0;
}