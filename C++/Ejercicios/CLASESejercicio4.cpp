/*CREACION DE INSTANCIAS DE VARIOS OBJETOS DE LA CALSE LibroCalificaciones
Y USO DE SU CONSTRUCTOR PARA ESPECIFICAR EL NOMBRE DEL CURSO
CUANDO SE CREA CADA OBJETO LibroCalificaciones*/
#include<iostream>
#include<string>
using namespace std;

class LibroCalificaciones{
    public:

    explicit LibroCalificaciones(string nombre)
    : nombreCurso(nombre)
    {

    }

    void establecerNombreCurso(string nombre){
        nombreCurso=nombre;
    }

    string obtenerNombreCurso()const{
        return nombreCurso;
    }

    void mostrarMensaje()const{
        cout<<"BIENVENIDO AL LIBRO DE CALIFICACIONES PARA \n"
        <<obtenerNombreCurso()<<"!"<<endl;

    }

    private: string nombreCurso;
};
int main(){
    LibroCalificaciones libroCalificaciones1 ("introduccion a la programacion en c++");
    LibroCalificaciones libroCalificaciones2 ("introduccion a las estructuras de datos");

    cout<<"libroCalificaciones1 se creo para el curso:"<<libroCalificaciones1.obtenerNombreCurso()<<endl;
    cout<<"libroCalificaciones2 se creo para el curso:"<<libroCalificaciones2.obtenerNombreCurso()<<endl;

    return 0;
}