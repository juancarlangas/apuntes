/*EN ESTE EJERCICIO IMLPEMENTAMOS PASO DE PARAMETROS POR REFERENCIA
ES DECIR CAMBIAREMOS EL VALOR DE LA VARIABLE DEL INT MAIN DESDE UNA FUNCION VOID 
ALTERARANDO LA DIRECCION QUE ALMACENA EL APUNTADOR 1, ES DECIR,
ESTE YA NO SEGUIRA TENIENDO ALMACENADO LA DIRECCION DE LA VARIABLE A LA 
QUE SE LE ASIGNO SI NO A LA DE LA FUNCION*/
#include<iostream>

void FnPuntero(int **puntedad1){

    static int edad=333;
    std::cout<<"ESTAS EN LA FUNCION VOID\n";
    std::cout<<"LA EDAD DE int Edad es: "<<edad<<std::endl;
    std::cout<<"LA DIRECCION DE int Edad es: "<<&edad<<std::endl;
    std::cout<<"EL VALOR DE LA LA VARIABLE DESDE EL APUNTADOR ES: "<<**puntedad1<<std::endl;
    std::cout<<"EL VALOR DE LA DIRECCION DEL PUNTERO ES: "<<*puntedad1<<std::endl;
    std::cout<<"\n";

    **puntedad1=123;
    *puntedad1=&edad;

    std::cout<<"LA EDAD DE int Edad es: "<<edad<<std::endl;
    std::cout<<"LA DIRECCION DE int Edad es: "<<&edad<<std::endl;
    std::cout<<"EL VALOR DE LA LA VARIABLE DESDE EL APUNTADOR ES: "<<**puntedad1<<std::endl;
    std::cout<<"EL VALOR DE LA DIRECCION DEL PUNTERO ES: "<<*puntedad1<<std::endl;
    std::cout<<"\n";
}

int main(){
    int edad=3000;
    int *puntedad=&edad;

    std::cout<<"APRENDIENDO C++\n";
    std::cout<<"PUNTERO A OTRO PUNTERO"<<std::endl;

    std::cout<<"ESTOS SON LOS VALORES ANTES DE LA LLAMADA DE LA FUNCION:\n";
    std::cout<<"LA EDAD DE int Edad es: "<<edad<<std::endl;
    std::cout<<"LA DIRECCION DE int Edad es: "<<&edad<<std::endl;
    std::cout<<"EL VALOR DE LA VARIABLE DESDE EL APUNTADOR ES: "<<*puntedad<<std::endl;
    std::cout<<"EL VALOR DE LA DIRECCION DEL PUNTERO ES: "<<puntedad<<std::endl;
    std::cout<<"\n";

    FnPuntero(&puntedad);//pasamos la direccion del apuntador

    std::cout<<"ESTOS SON LOS VALORES DESPUES DE LA LLAMADA DE LA FUNCION:\n";
    std::cout<<"LA EDAD DE int Edad es: "<<edad<<std::endl;
    std::cout<<"LA DIRECCION DE int Edad es: "<<&edad<<std::endl;
    std::cout<<"EL VALOR DE LA LA VARIABLE DESDE EL APUNTADOR ES: "<<*puntedad<<std::endl;
    std::cout<<"EL VALOR DE LA DIRECCION DEL PUNTERO ES: "<<puntedad<<std::endl;
    std::cout<<"\n";

    return 0;
}