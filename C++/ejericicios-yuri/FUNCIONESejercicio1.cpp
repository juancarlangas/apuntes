/*EN ESTE PROGRAMA ILUSTRAREMOS COMO HACER USO DE FUNCIONES SOBRECARGA*/

/*DEFINICION DE SOBRECARGA: LA FUNCION SOBRECARGA
SOLAMENTE ES EL MISMO NOMBRE EN VARIAS FUNCIONES PERO CON PARAMETROS DISTINTOS*/
#include<iostream>
using namespace std;

int Funcion1 (int numero1){
    int suma;
    suma=numero1+10;

    return suma;
}

int Funcion1(int numero1,int numero2){
    int suma;
    suma=numero1+numero2;
    return suma;
}

float Funcion1(float numero1,float numero2){
    float suma;
    suma=numero1+numero2;
    return suma;
}

int main(){
    int numero1=10;
    int numero2=20;
    float fnumero1=10.40;
    float fnumero2=20.50;

    /*AQUI EL COMPILADOR DIFERENCIA LAS FUNCIONES POR PARAMETROS*/
    cout<<" EL RESULTADO DE LA SOBRECARGA 1 ES:"<<Funcion1(numero1)<<endl;
    cout<<" EL RESULTADO DE LA SOBRECARGA 2 ES:"<<Funcion1(numero1,numero2)<<endl;
    cout<<" EL RESULTADO DE LA SOBRECARGA 3 ES:"<<Funcion1(fnumero1,fnumero2)<<endl;


    return 0;
}