#include "ArregloDinamico.h"

ArregloDinamico::ArregloDinamico(){

    arreglo = new string[MAX];
    cont = 0;
    tam = MAX;

}

ArregloDinamico::~ArregloDinamico(){

    delete[] arreglo;

}

void ArregloDinamico::insertar_final(string v){

    if (cont == tam){
            expandir();
    }
    arreglo[cont] = v;
    cont++;
}

void ArregloDinamico::insertar_inicio(string v){

    if (cont == tam){
            expandir();
    }
    for (size_t i=cont; i>0; i--){
        arreglo[i] = arreglo[i-1];
    }
    arreglo[0] = v;
    cont++;
}

size_t ArregloDinamico::size(){
        return cont;

}

void ArregloDinamico::expandir(){

    string *nuevo = new string[tam+MAX];
    for(size_t i =0; i < cont; i++){
        nuevo[i] = arreglo[i];

    }
    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;

}
