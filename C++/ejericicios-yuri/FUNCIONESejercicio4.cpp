/*ESTRUCTURAS*/
/*ES UN CONJUNTO DE VARIABLES LAS CUALES SE AGRUPAN  BAJO UN MISMO NOMBRE
EL NOMBRE DE UNA ESTRUCTURA, Y DE LA CUAL POSTERIORMENTE SE PUEDEN DEFINIR
VARIABLES  DE ESTA ESTRUCTURA COMO SI FUERA UN TIPO DE DATO.

AL MOMENTO EN QUE SE DEFINE LA ESTRUCTURA ES POSIBLE DECLARAR VARIABLES
O PUEDE REALIZARSE POSTERIORMENTE

LA SINTAXISDE LA DECLARACION DE UNA ESTRUCTURA EN LEGUAJE C++

struct [nombre del estruct]{
    tipo_de_variable nombre_de variable;
    ...
};*/

#include<iostream>

struct EDITORIAL{
    int iIDe;
    std::string sNom;
    std::string sDir;
    std::string sTel;
    std::string sWeb;
};

void FnTest(){
    struct EDITORIAL xEdi;
    
    
}

int main(){

    std::cout<<"CURSO DE C++ STRUCTS\n\n";

    struct LIBROS
    {
        std::string sTit;
        std::string sAut;
        std::string sedi;
             int    iISBN;
             int    ianio;
    };
    
    LIBROS xLibro1,xLibro2;
    EDITORIAL xEditorial;

    xEditorial.iIDe=1;
    xEditorial.sNom="LIMUSA";
    xEditorial.sDir="Zona Centro, MEXICO, CD. MEXICO";
    xEditorial.sTel="9999999";
    xEditorial.sWeb="WWW.EDITORIALLIMUSA.COM";

    xLibro1.sTit="Alicia en el pais de las maravillas";
    xLibro1.sAut="dsdsadsadas";
    xLibro1.ianio=1917;
    xLibro1.sedi="PLANETA";
    xLibro1.iISBN=194484144;

    std::cout<<"TITULO LIBRO 1:"<<xLibro1.sTit<<'\n'
             <<"AUTOR: "<<xLibro1.sAut<<'\n'
             <<"ANIO DE LA PUBLICACION: "<<xLibro1.ianio<<'\n'
             <<"EDITORIAL: "<<xEditorial.sNom<<'\n'
             <<"EDITORIAL DIRECCION: "<<xEditorial.sDir<<'\n'
             <<"EDITORIAL TELEFONO: "<<xEditorial.sTel<<'\n'
             <<"EDITORIAL SITIO WEB: "<<xEditorial.sWeb<<'\n'
             <<"ISBN "<<xLibro1.iISBN;

    return 0;
}