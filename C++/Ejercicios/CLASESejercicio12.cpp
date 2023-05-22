/*EN ESTE EJERCICIO HAREMOS USO DEL OPERADOR POR AMBITO DE RESOLUCION 
PARA LA CREACION DE METODOS*/
#include<iostream>

class Casa{
    public:

        void FnBarrer();

        void FnTrapeas();

        void FnTrastes ();

};

void Casa::FnBarrer(){
std::cout<<"BARRES LA CASA";
}

void Casa::FnTrapeas(){
    std::cout<<"TRAPEAS LA CASA";
}

void Casa::FnTrastes (){
        std::cout<<"LAVAS LOS TRASTES";
}

int main(){

    Casa limpieza;

    std::cout<<"LABORES POR HACER: \n";
    limpieza.FnBarrer();
    std::cout<<'\n';
    limpieza.FnTrapeas();
    std::cout<<'\n';
    limpieza.FnTrastes();


    return 0;
}