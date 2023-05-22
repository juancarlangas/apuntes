/*EN ESTE EJERCICIO HAREMOS USO  DE UN APUNTADOR A OTRO APUNTADOR*/
#include<iostream>


int main(){

    int variable=10,*apuntador1,**apuntador2;
    apuntador1=&variable;//paso la direccion de la memoria y le asigno su contenido
    apuntador2=&apuntador1;//paso la direccion de la variable apuntador y se asigna el contenido de la
    std::cout<<"APUNTADOR A OTRO APUNTADOR! "<<std::endl;//variable a la que apunta
    std::cout<<"\n";
    std::cout<<"VALOR DE LA VARIABLE: "<<variable<<std::endl;
    std::cout<<"VALOR DE LA VARIABLE DESDE EL APUNTADOR: "<<*apuntador1<<std::endl;
    std::cout<<"VALOR DE LA VARIBLE DESDE DOBLE APUNTADOR: "<<**apuntador2<<std::endl;
    std::cout<<"\n";
    std::cout<<"ASIGNANDO OTRA VALOR A LA VARIBLE!"<<std::endl;
    variable=60;
    std::cout<<"VALOR DE LA VARIABLE: "<<variable<<std::endl;
    std::cout<<"VALOR DE LA VARIABLE DESDE EL APUNTADOR: "<<*apuntador1<<std::endl;
    std::cout<<"VALOR DE LA VARIBLE DESDE DOBLE APUNTADOR: "<<**apuntador2<<std::endl;
    std::cout<<"\n";
    **apuntador2=199;
    std::cout<<"MODIFICANDO EL VALOR DE LA VARIABLE DESDE EL APUNTADOR!"<<std::endl;
    std::cout<<"VALOR DE LA VARIABLE MODIFICADA: "<<variable<<std::endl;
    std::cout<<"VALOR DE LA VARIABLE DESDE EL APUNTADOR: "<<*apuntador1<<std::endl;
    std::cout<<"VALOR DE LA VARIABLE DESDE DOBLE APUNTADOR: "<<**apuntador2<<std::endl;
    std::cout<<"\n";
    std::cout<<"MOSTRANDO EL VALOR DE LA MEMORIA!"<<std::endl;
    std::cout<<"DIRECCION DE MEMORIA DEL APUNTADOR 1: "<<apuntador1<<std::endl;
    std::cout<<"DIRECCION DE MEMORIA DEL APUNTADOR 2: "<<*apuntador2;
    return 0;
}