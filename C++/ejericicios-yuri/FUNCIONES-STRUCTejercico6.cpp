/*EN ESTE EJERCICIO MOSTRAMOS UN STRUCT CON VARIABLE
TIPO APUNTADOR QUE ASU VEZ CONTIENE UNA VIARABLE
TIPO STRUCT QUE TIENE UNA VARIABLE TIPO APUNTADOR*/

#include<iostream>

struct TEST{
    int yDato{30};
    int *pVariable2{&yDato};
};

struct ESTRUC1
{
    int xDato{40};
    int *pVariable{&xDato};
    struct TEST sVariable;
};

int main(){
    ESTRUC1 xVariable;
    //recuerda que el operador flecha sirve para acceder a los miembros 
    //de un apuntador a struct, no a los miembros apuntadores de un struct
    std::cout<<"DATOS xDATO: "<<xVariable.xDato<<'\n'
             <<"DATO ALMACENADO DESDE PUNTERO: "<<*(xVariable.pVariable)<<'\n'
             <<"DIRECCION DE xDato DESDE EL PUNTERO: "<<xVariable.pVariable<<'\n'
             <<"DIRECCION DE yDato: "<<xVariable.sVariable.yDato<<'\n'
             <<"DIRECCION DE yDato DESDE EL PUNTERO: "<<*(xVariable.sVariable.pVariable2);

    return 0;
}
