#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H
#include <iostream>

using namespace std;

class ArregloDinamico{
    string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;

public:
    ArregloDinamico();
    ~ArregloDinamico();
    void insertar_final(string v);
    void insertar_inicio(string v);
    size_t size();

    string operator[](size_t p){
        return arreglo[p];
    }


private:
    void expandir();

};




#endif 
