/*EN ESTE EJERCICIO VEREMOS EL USO DE UN PUNTERO 
SEÑALANDO A UNA FUNCION*/


#include<iostream>

void FnTest(){
std::cout<<"ESTAS EN LA FUNCION :)\n";
}


int main(){
    void(*fp)();
    fp=FnTest;
    (*fp)();
    void(*fp2)();
    fp2=FnTest;
    (*fp2)();
    return 0;
}