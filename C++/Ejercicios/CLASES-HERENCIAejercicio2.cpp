/*EN ESTE EJERCICIO VEREMOS HERENCIA MULTIPLE*/
/*UNA CLASE HIJA PUEDE SER CREADA HEREDANDO DE MAS DE UNA CLASE
LA SINTAXIS VISTA ANTERIORMENTE PUEDE SER ACTUALIZADA DE LA SIGUIENTE FORMA:

class Clase_nueva: especificador de acceso clase_padre,
                    especificador de acceso2 clase_padre2
                    ...*/

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

class Costo_pintar{
    public:
        int get_cost(int &iArea){
            return iArea*200;
        }

};

class Rectangulo: public Figura_Geometrica,
                  public Costo_pintar
{ 
                    
    public:

        int get_Area(){
            return iAltura*iAncho;
        }  


};

int main(){
    Figura_Geometrica xFigura;
    int lArea;
    std::cout<<"CLASES HERENCIA :)";
    Rectangulo xRectangulo;
    xRectangulo.set_Altura(77);
    xRectangulo.set_Anchura(1);

    lArea=xRectangulo.get_Area();
    std::cout<<"AREA DE FIGURA: "<<lArea;
    std::cout<<"COSTO DE PINTAR: "<<xRectangulo.get_cost(lArea);

    return 0;
}