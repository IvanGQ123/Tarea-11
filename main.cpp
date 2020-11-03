#include <iostream>
#include "ArregloDinamico.h"      
#include "windows.h"  

using namespace std;


int main(){
    ArregloDinamico<string> at;
    int i;
    
    at.insertar_final("Dark");
    at.insertar_final("Souls");
    at.insertar_inicio("Ivan");
    at.insertar_inicio("Gomez");
    cout<<"DATOS:"<<endl;
    for (size_t i=0; i< at.size(); i++){
        cout<<at[i]<<" ";
    }
    cout<<"\n\nINSERTADOS:"<<endl;
    at.insertar("colado",3);

    for (size_t i=0; i< at.size(); i++){
        cout<<at[i]<<" ";
    }
    cout<<"\n\nELIMINADOS:"<<endl;
    at.eliminar_inicio();
    at.eliminar_final();
    at.eliminar(2);
    for (size_t i=0; i< at.size(); i++){
        cout<<at[i]<<" ";
    }

    /*for (i=0; i<10; i++){
        at.insertar_final(i);
    }
    at.insertar(100,2);
    at.eliminar_inicio();
    at.eliminar_final();
    at.eliminar(5);
    for (size_t i=0; i< at.size(); i++){
        cout<<at[i]<<" ";
    }
    */
    
    /* 
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
    */
cout<<"\n\n"<<endl;

system("pause");
    return 0;
}