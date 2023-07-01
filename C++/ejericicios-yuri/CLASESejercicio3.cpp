//Define la clase LibroCalificaiones que contiene un miembro de datos
//nombreCurso y funciones miembro para estableces y obtener su valor:
//Crea y manipula un objeto LibroCalificaiciones con estas fucniones.
#include<iostream>
#include<string>
using namespace std;

class LibroCalificaciones{
    public:
    void establecerNombreCurso(string nombre){
        nombreCurso=nombre;
    }

    string obtenerNombreCurso()const{
        return nombreCurso;
    }

    void mostrarMensaje()const{
        cout<<"BIENVENIDO AL LIBRO DE CALIFICACIONES PARA \n"
        <<obtenerNombreCurso()<<"!"<<endl;//es mejor llamar a una funcion que directamente acceder al 
                                    //miembro
    }
    private:
    string nombreCurso;
};

int main (){
    string nombreDelCurso;
    LibroCalificaciones miLibroDeCalificaciones;

    //muestra el valor inicial del curso
    cout<<"EL NOMBRE INICIAL DE CURSO ES: "<<miLibroDeCalificaciones.obtenerNombreCurso()<<endl;

   //pide, establece el nombre del curso
   cout<<"ESCRIBA EL NOMBRE DEL CURSO"<<endl;
   getline(cin,nombreDelCurso);

   miLibroDeCalificaciones.establecerNombreCurso(nombreDelCurso);

   cout<<endl;
   miLibroDeCalificaciones.mostrarMensaje();
    return 0;
}