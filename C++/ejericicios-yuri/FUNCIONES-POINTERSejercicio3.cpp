#include<iostream>
using namespace std;



void FinParametroPorApuntador(int *iporApuntador){

    cout<<"Valor del Parametro por apuntador dentro de la funcion"<<*iporApuntador<<endl;

    *iporApuntador=44;

    cout<<"Valor del Parametro por apuntador dentro de la funcion"<<*iporApuntador<<endl;
}

int main (){
    cout<<"CURSO DE C++\n"<<"ejercicio 20"<<endl;
    int iNumero=0;

    int *iValor;

    *iValor=29;
    cout<<"Valor del numero antes de llamar la funcion: "<<iNumero<<endl;
    FinParametroPorApuntador(&iNumero);//paso su direccion de memoria
    cout<<"Valor de un numero despues de llamar a la funcion"<<iNumero<<endl;

    
    cout<<"Valor del numero antes de llamar la funcion: "<<*iValor<<endl;
    FinParametroPorApuntador(iValor);//cuando se declara una variable tipo apuntador ya no es necesario
    cout<<"Valor de un numero despues de llamar a la funcion"<<*iValor<<endl;//el anderson 

    
    return 0;
}