/*HERENCIA :)*/
/*ESTE ES UNO DE LOS TEMAS MAS IMPORTANTES DE LA PROGRAMACION ORIENTADA A OBJETOS

LA HERENCIA ES LA CAPACIDAD DE UNA CLASE DE HEREDAR A OTRA SUS CARACTERISTICAS
Y FUNCIONALIDADES

DICHO DE OTRA FORMA, ES LA CAPACIDAD DE CREAR UNA CLASE BASADA EN SUS CARACTERISTICAS

LA SINTAXIS ES LA SIGUIENTE:

class clase_nueva:  especificador_acceso clase_base

donde

clase_nueva: es la clase derivada a crear.
especificador_acceso: public, protectes, private
clase_base: la clase que lo hereda*/

#include<iostream>

class Figura_Geometrica{
    public:

        void set_Anchura(int pAncho){
            iAncho=pAncho;
        }

        void set_Altura(int pAltura){
            iAltura=pAltura;
        }

    protected://PUUDE SER VISTO POR CLASSES HIJA
        int iAltura,iAncho;

    private: //No PODREMOS ACCEDER DESDE LA FUNCION HIJA A ESTE DATO
        int iTest;    

};

class Rectangulo: public Figura_Geometrica{//ponemos public para poder acceder 
                    //a los metodos
    public:

        int get_Area(){
            return iAltura*iAncho;
        }

};

int main(){
    Figura_Geometrica xFigura;
    std::cout<<"CLASES HERENCIA :)";
    Rectangulo xRectangulo;
    xRectangulo.set_Altura(77);
    xRectangulo.set_Anchura(4);

    std::cout<<"AREA DEL RECTANGULO: "<<xRectangulo.get_Area();

    return 0;
}