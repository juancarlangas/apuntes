/*EN ESTE EJERCICIO SE RETORNAR UN APUNTADOR EN UNA FUNCION*/
#include<iostream>

//FUNCION QUE RECIBE UN APUNTADOR COMO PARAMETRO POR REFERENCIA
int* FnRetornar(){
        static int variable=49;
        int *pInt=&variable;

        std::cout<<"VARIABLE LOCAL EN LA FUNCION"<<std::endl;
        std::cout<<"VALOR DE LA VARIABLE EN LA FUNCION TIPO PUNTERO: "<<variable<<std::endl;
        std::cout<<"VALOR DEL CONTENIDO DEL APUNTADOR EN LA FUNCION:"<<*pInt<<std::endl;
        std::cout<<"VALOR DEL APUNTADOR EN LA FUNCION: "<<pInt<<std::endl;
        std::cout<<"\n";

        return pInt;//Retorno del apuntador
}
int main(){
    std::cout<<"CURSO DE C++"<<std::endl;
    std::cout<<"APUNTADORES RETORNANDO"<<std::endl;

    int x=3232;
    int *pInteger=&x;
    
    std::cout<<"VALORES DE LA VARIABLE ANTES DE INVOCAR A LA FUNCION: "<<std::endl;
    std::cout<<"VALOR DE LA VARIABLE int: "<<x<<std::endl;
    std::cout<<"VALOR DEL CONTENIDO DEL APUNTADOR: "<<*pInteger<<std::endl;
    std::cout<<"VALOR DE DIRECCION DEL APUNTADOR: "<<pInteger<<std::endl;
    std::cout<<"\n";

    pInteger=FnRetornar();//Le asigno la direccion que contiene el apuntador
                        //que retorna al apuntador pInteger
    std::cout<<"VALORES DE LA VARIABLE DESPUES DE INVOCAR A LA FUNCION: "<<std::endl;
    std::cout<<"VALOR DE LA VARIABLE int en el int main: "<<x<<std::endl;
    std::cout<<"VALOR DEL CONTENIDO DEL APUNTADOR: "<<*pInteger<<std::endl;
    std::cout<<"VALOR DE DIRECCION DEL APUNTADOR: "<<pInteger<<std::endl;
    std::cout<<"\n";

    return 0;
}