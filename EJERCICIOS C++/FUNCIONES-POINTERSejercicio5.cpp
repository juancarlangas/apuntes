/*EN ESTE EJERCICIO IMLPEMENTAMOS PASO DE PARAMETROS POR VALOR 
ES DECIR CAMBIAREMOS EL VALOR DE LA VARIABLE DEL INT MAIN DESDE UNA FUNCION VOID PERO
SIN ALTERAR LA DIRECCION QUE ALMACENA EL APUNTADOR 1, ES DECIR,
 ESTE SEGUIRA TENIENDO ALMACENADO LA DIRECCION DE LA VARIABLE A LA 
QUE SE LE ASIGNO*/

#include<iostream>

void FnPuntero(int *puntedad1){

    int edad=10;
    std::cout<<"ESTAS EN LA FUNCION VOID\n";
    std::cout<<"LA EDAD DE int Edad es: "<<edad<<std::endl;
    std::cout<<"ESTA ES LA DIRECCION DE LA VARIABLE int: "<<&edad<<'\n';
    std::cout<<"EL VALOR DE LA LA VARIABLE DESDE EL APUNTADOR ES: "<<*puntedad1<<std::endl;
    std::cout<<"EL VALOR DE LA DIRECCION DEL PUNTERO ES: "<<puntedad1<<std::endl;
    std::cout<<"\n";

    *puntedad1=4000;
    puntedad1=&edad;

    std::cout<<"LA EDAD DE int Edad es: "<<edad<<std::endl;
    std::cout<<"ESTA ES LA DIRECCION DE LA VARIABLE int: "<<&edad<<'\n';
    std::cout<<"EL VALOR DE LA LA VARIABLE DESDE EL APUNTADOR ES: "<<*puntedad1<<std::endl;
    std::cout<<"EL VALOR DE LA DIRECCION DEL PUNTERO ES: "<<puntedad1<<std::endl;
    std::cout<<"\n";
}

int main(){
    int edad=18;
    int *puntedad=&edad;

    std::cout<<"APRENDIENDO C++\n";
    std::cout<<"PUNTERO A OTRO PUNTERO"<<std::endl;

    std::cout<<"ESTOS SON LOS VALORES ANTES DE LA LLAMADA DE LA FUNCION:\n";
    std::cout<<"LA EDAD DE int Edad es: "<<edad<<std::endl;
    std::cout<<"ESTA ES LA DIRECCION DE LA VARIABLE int: "<<&edad<<'\n';
    std::cout<<"EL VALOR DE LA VARIABLE DESDE EL APUNTADOR ES: "<<*puntedad<<std::endl;
    std::cout<<"EL VALOR DE LA DIRECCION DEL PUNTERO ES: "<<puntedad<<std::endl;
    std::cout<<"\n";

    FnPuntero(puntedad);//pasamos el apuntador que contiene una direccion
    std::cout<<"ESTOS SON LOS VALORES DESPUES DE LA LLAMADA DE LA FUNCION:\n";
    std::cout<<"LA EDAD DE int Edad es: "<<edad<<std::endl;
    std::cout<<"ESTA ES LA DIRECCION DE LA VARIABLE int: "<<&edad<<'\n';
    std::cout<<"EL VALOR DE LA LA VARIABLE DESDE EL APUNTADOR ES: "<<*puntedad<<std::endl;
    std::cout<<"EL VALOR DE LA DIRECCION DEL PUNTERO ES: "<<puntedad<<std::endl;
    std::cout<<"\n";

    return 0;
}