#include <iostream>
#include "ArregloDinamico.h"      
#include <windows.h>  
#include "Computadora.h"
using namespace std;


int main(){
    ArregloDinamico<Computadora> computadoras;

    Computadora c01("HP", 12, "Windows 10", 500);
    Computadora c02("Lenovo", 8, "Linux", 1000);
    Computadora c03("HP", 4, "Windows 7", 1000);
    
    
    Computadora c04("Dell", 4, "Linux", 500); 
    Computadora c05("Lenovo", 8, "Linux", 1000);
    Computadora c08("JK", 2, "MP", 2);

    computadoras << c01 << c02 << c03 <<c02 <<c02 <<c04 <<c05;
    
    cout<<"Buscar Todos"<<endl;
    ArregloDinamico<Computadora*> ptrs = computadoras.buscar_todos(c05);

    if(ptrs.size()>0){
        for(size_t i=0; i < ptrs.size(); i++){
            Computadora *v = ptrs[i];
            cout<<*v<<endl;
        }
    }else{
        cout<<"No existen coincidencias"<<endl;
    }

   
    cout<<"Buscar Uno Existente"<<endl;
    Computadora *ptrl = computadoras.buscar(c01);
    if(ptrl != nullptr){
            cout << *ptrl << endl;
        }else{
            cout<<"No Existe"<<endl;
      }
    
    cout<<"Buscar uno inexistente"<<endl;
    Computadora *ptr = computadoras.buscar(c08);
    if(ptr != nullptr){
            cout << *ptr << endl;
        }else{
            cout<<"No Existe"<<endl;
        }

    /*
    ArregloDinamico<string> at;

    
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
    
    cout<<"\nBuscar"<<endl;
    string *v = at.buscar("Ivan");
    cout<< v << " " << *v <<endl;
    */
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