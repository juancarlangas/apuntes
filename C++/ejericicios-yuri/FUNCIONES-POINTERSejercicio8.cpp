/*EN ESTE EJERCICIO HAREMOS USO DE RETORNAR LA DIRECCION DE UN ARREGLO Y COMO USARLO DESDE
DONDE HA SIDO LLAMADO*/

#include<iostream>

int* FnRetornar (){
    static int iArreglo[3]={1,2,3};
    int *pInt=iArreglo;//EN LOS ARREGLOS NO ES NECESARIO ASIGNAR VALOR POR DIRECCION YA QUE UN ARREGLO
                        //ES UN PUNTERO QUE APUNTA SIEMPRE AL PRIMER ELEMENTO

    std::cout<<"DATOS ALMACENADOS EN ARREGLO: "<<iArreglo[0]<<", "<<iArreglo[1]<<", "<<iArreglo[2]<<std::endl;
    std::cout<<"VALOR DEL CONTENIDO DEL APUNTADOR: "<<*pInt<<std::endl;//EL PRIMER ELEMENTO POR LO QUE MENCIONAMOS
    std::cout<<"VALOR DE DIRRECION DEL APUNTADOR: "<<pInt<<std::endl;   
    std::cout<<"\n";
    //NOTA: UN ARREGLO ES UN APUNTADOR ASI QUE PUEDES RETORNAR iArreglo o pInt
    return iArreglo;
    //return pInt;
}

int main(){

    int iVariable=90;
    int *iapunt=&iVariable;
    std::cout<<"CURSO DE C++"<<std::endl;
    std::cout<<"APRENDIENDO COMO RETORNAR UN ARREGLO "<<std::endl;

    std::cout<<"VALOR DE LA VARIABLE int: "<<iVariable<<std::endl;
    std::cout<<"VALOR AL CONTENIDO QUE APUNTA: "<<*iapunt<<std::endl;
    std::cout<<"VALOR DE DIRECCION QUE ALMACENA: "<<iapunt<<std::endl;
    std::cout<<"\n";

    iapunt=FnRetornar();//OBTENEMOS LA DIRECCION DEL APUNTADOR

    std::cout<<"VALORES REGRESANDO DE LA FUNCION: "<<std::endl;
    std::cout<<"VALOR DE LA VARIABLE int: "<<iVariable<<std::endl;
    //AQUI PODEMOS ACCEDER A SUS DATOS SUMANDO LAS POSICIONES (COMO EL ARREGLO SOLO TIENE 3 POSICIONES)
    //SOLO LLEGA HASTA 2 
    std::cout<<"VALOR AL CONTENIDO QUE APUNTA: "<<*iapunt<<", "<<*(iapunt+1)<<", "<<*(iapunt+2)<<std::endl;
    std::cout<<"VALOR DE DIRECCION QUE ALMACENA: "<<iapunt<<std::endl;

    return 0;
} 