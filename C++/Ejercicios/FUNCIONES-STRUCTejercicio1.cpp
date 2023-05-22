/*EN ESTE EJERCICIO HAREMOS USO DEL OPERADOR DE AMBITO DE RESOLUCION*/

#include<iostream>

struct Test1
{
    void FnDesplegar();
};

struct Test2
{
     void FnDesplegar();
};

void Test1::FnDesplegar(){
    std::cout<<"MENSAJE :)\n";
}

void Test2::FnDesplegar(){
    std::cout<<"MENSAJE 2 :)";
}

int main(){

    struct Test1 sVariable;
    struct Test2 sVariable2;

    std::cout<<"DESPLEGAR EL MENSAJE: ";
             sVariable.FnDesplegar();

    std::cout<<"DESPLEGANDO EL MENSAJE 2: ";
             sVariable2.FnDesplegar();

    return 0;
}