/*FUNCIONES AMIGAS*/
/*ESTE CODIGO ILUSTRARA DE FORMA CLARA EL CONCEPTO DE FUNCIONES AMIGAS*/
/*UNA FUNCION AMIGA DE UNA CLASE, ES AQUELLA QUE SE ENCUENTRA DEFINIDA 
FUERA DE LA CLASE, PERO TIENE COMO PARAMETRO A ESTA CLASE, PERMITIENDO
DE ESTA FORMA QUE ESTA FUNCION AMIGA, PUEDA ACCEDER A LOS MIEMBROS PRIVADOS
DE LA CALSE.

DICHO DE OTRA FORMA Y MAS A DETALLE, UNA FUNCION AMIGA DE UNA CLASE
ES UNA FUNCION QUE NO PERTENENCE A LA CASE, PERO QUE TIENE PERMISO PARA ACCEDER
A SUS VARIABLES Y FUNCIONES MIEMBRO PRIVADAS POR MEDIO DE LOS OPERADORES 
PUNTO (.) Y FECHA(->) SIN TENER QUE RECURRIR A LAS FUNCIONES MIEMBRO PUBLICAS
DE LA CLASE QUE ACCEDEN A LOS ELEMENTOS PRIVADOS 

EL MODIFICADOR FRIEND ES EL QUE NOS PERMITE REALIZAR ESTA INDICACION ES
IMPORTANTE INDICAR QUE LAS FUNCIONES AMIGAS NO SON PUBLICAS, NI PRIVADAS: YA QUE
SE ENCUENTRAN FUERA DE LA CLASE */

#include<iostream>
using namespace std;

class Test{
   public:
        Test(){
            xPrivate=10;
        }
        void FnDesplegar(){
            cout<<"El elemento privado al doble: "<<xPrivate*2<<endl;
        }
    friend void FnAccesoAmigo(Test);    
    private: 
            int xPrivate;    
};

void FnAccesoAmigo(Test xTest){//Accede a la variable miembro por el nombre de la clase y el nombre de la variable tipo clase
    cout<<"Desplegando xPrivate desde funcion amiga: "<<xTest.xPrivate<<endl;//Se accede nombre por nombre (punto ) variable de clase
}

int main(){
    cout<<"CURSO DE C++\n";
    cout<<"CLASE DE FUNCIONES AMIGAS"<<endl;

    //Creamos el Objeto de Test
    Test xDato;

    xDato.FnDesplegar();
    FnAccesoAmigo(xDato);

    return 0;
}