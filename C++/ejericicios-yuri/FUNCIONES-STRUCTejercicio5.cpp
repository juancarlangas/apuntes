//HAREMOS USO DE STRUCTS DESDE FUNCIONES

#include<iostream>
struct NOMBRE
{
    std::string sNombre;
    std::string sApellido1;
    std::string sApellido2;
};

void FnStruct(struct NOMBRE nombreCliente);
void FnStruct2(struct NOMBRE &nombreCliente2);
void FnStruct3(struct NOMBRE *nombreCliente3);

int main(){
    struct NOMBRE nombreCliente;

    nombreCliente.sNombre="NOMBREORIGINAL";
    nombreCliente.sApellido1="APELLIDOORIGINAL";
    nombreCliente.sApellido2="APELLIDO2ORIGINAL";

    std::cout<<"ESTE ES EL NOMBRE: "
             <<nombreCliente.sNombre<<'\n'
             <<"ESTE ES EL APELLIDO PATERNO: "
             <<nombreCliente.sApellido1<<'\n'
             <<"ESTE ES EL APELLIDO MATERNO: "
             <<nombreCliente.sApellido2<<"\n\n";

    FnStruct(nombreCliente);
      
    std::cout<<"ESTE ES EL NOMBRE DESPUES DE INVOCAR LA FUNCION 1: "
             <<nombreCliente.sNombre<<'\n'
             <<"ESTE ES EL APELLIDO PATERNO: "
             <<nombreCliente.sApellido1<<'\n'
             <<"ESTE ES EL APELLIDO MATERNO: "
             <<nombreCliente.sApellido2<<"\n\n";

    
    FnStruct2(nombreCliente);
     std::cout<<"ESTE ES EL NOMBRE DESPUES DE INVOCAR LA FUNCION 2: "
              <<nombreCliente.sNombre<<'\n'
              <<"ESTE ES EL APELLIDO PATERNO: "
              <<nombreCliente.sApellido1<<'\n'
              <<"ESTE ES EL APELLIDO MATERNO: "
              <<nombreCliente.sApellido2<<"\n\n";
    
    FnStruct3(&nombreCliente);
     std::cout<<"ESTE ES EL NOMBRE DESPUES DE INVOCAR LA FUNCION 3: "
              <<nombreCliente.sNombre<<'\n'
              <<"ESTE ES EL APELLIDO PATERNO: "
              <<nombreCliente.sApellido1<<'\n'
              <<"ESTE ES EL APELLIDO MATERNO: "
              <<nombreCliente.sApellido2<<"\n\n";


    return 0;
}

void FnStruct(struct NOMBRE nombreCliente){
    nombreCliente.sNombre="JULIO1";
    nombreCliente.sApellido1="NAMI1";
    nombreCliente.sApellido2="QUIÑONEZ1";

    std::cout<<"FUNCION QUE NO MODIFICA LOS VALORES"<<'\n'
             <<"ESTE ES EL NOMBRE: "
             <<nombreCliente.sNombre<<'\n'
             <<"ESTE ES EL APELLIDO PATERNO: "
             <<nombreCliente.sApellido1<<'\n'
             <<"ESTE ES EL APELLIDO MATERNO: "
             <<nombreCliente.sApellido2<<"\n\n";
}

void FnStruct2(struct NOMBRE &nombreCliente2){
    nombreCliente2.sNombre="ROBERTO2";
    nombreCliente2.sApellido1="SANCHEZ2";
    nombreCliente2.sApellido2="GUZMAN2";

    std::cout<<"FUNCION QUE MODIFICA LOS VALORES"<<'\n'
             <<"ESTE ES EL NOMBRE MODIFICADO: "
             <<nombreCliente2.sNombre<<'\n'
             <<"ESTE ES EL APELLIDO PATERNO MODIFICADO: "
             <<nombreCliente2.sApellido1<<'\n'
             <<"ESTE ES EL APELLIDO MATERNO MODIFICADO: "
             <<nombreCliente2.sApellido2<<"\n\n";
}

void FnStruct3(struct NOMBRE *nombreCliente3){
     nombreCliente3->sNombre="JEREMIAS3";
    nombreCliente3->sApellido1="CONNOR3";
    nombreCliente3->sApellido2="GUZMAN3";

    std::cout<<"FUNCION QUE MODIFICA LOS VALORES APUNTADOR"<<'\n'
             <<"ESTE ES EL NOMBRE MODIFICADO: "
             <<nombreCliente3->sNombre<<'\n'
             <<"ESTE ES EL APELLIDO PATERNO MODIFICADO: "
             <<nombreCliente3->sApellido1<<'\n'
             <<"ESTE ES EL APELLIDO MATERNO MODIFICADO: "
             <<nombreCliente3->sApellido2<<"\n\n";

}