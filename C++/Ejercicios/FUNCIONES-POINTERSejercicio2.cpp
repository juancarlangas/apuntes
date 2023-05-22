/*EN ESTA CLASE VEEREMOS LA RELACION QUE EXISTE ENTRE UN APNTADOR UN ARREGLO*/
/*UN ARREGLO EN REALIDAD ES UN APUNTADOR SOLO QUE ES CONSTANTE, ES DECIR SU DIRECCION
(SU VALOR COMO APUNTADOR) NO PUEDE SER MODIFICABLE */
//EN ESTE CODIGO VEREMOS COMO PODEMOS MANEJAR LA INFORMACION DE UN ARREGLO UTILIZANDO
//UN APUNTADOR
#include<iostream>

int main(){
    int iEdades[3]={10,20,30};
    int *pVarialbe{iEdades};
        /*NOTA IMPORTANTE*/
    /* int *pVarialbe{iEdades} == int*pVariable{&iEdades[0]}*/
    //Estos nos permite acceder a la direccion de determinado valor de un array
    std::cout<<"Valor de iEdad:"<<iEdades<<'\n' //La direccion del primer elemento
             <<"Valor del primer dato de iEdad: "<<iEdades[0]<<'\n'//El valor del primer elemento
             <<"Valor del primer dato desde el puntero: "<<*pVarialbe<<'\n'
             <<"Valor almacenado del puntero: "<<pVarialbe<<"\n\n";

    std::cout<<"Valor de iEdad:"<<iEdades + 1<<'\n'
             <<"Valor del primer dato de iEdad: "<<iEdades[1]<<'\n'
             <<"Valor del primer dato desde el puntero: "<<*(pVarialbe+1)<<'\n'
             <<"Valor almacenado del puntero: "<<pVarialbe + 1<<"\n\n";

    std::cout<<"Valor de iEdad:"<<iEdades + 2<<'\n'
             <<"Valor del primer dato de iEdad: "<<iEdades[2]<<'\n'
             <<"Valor del primer dato desde el puntero: "<<*(pVarialbe+2)<<'\n'
             <<"Valor almacenado del puntero: "<<pVarialbe + 2<<"\n\n";

    /*OTRA FORMA DE HACERLO SERIA CON UN CICLO FOR*/
    for(int x=0;x<3;x++){
        std::cout<<"VALORES DEL ARRAY: "<<iEdades[x]<<'\n'
                <<"DIRECCIONES DE LOS DATOS DEL ARRAY "<<iEdades + x<<'\n';
    }

    return 0;
}