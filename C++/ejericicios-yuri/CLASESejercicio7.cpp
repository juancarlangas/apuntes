#include<iostream>
#include"LibroCalificaciones.h"
using namespace std;

int main(){
        LibroCalificaciones libroCalificaciones1 ("Introduccion a la programacion en c++");
        LibroCalificaciones libroCalificaciones2("Introduccion a estructuras de datos");

        cout<<"ESTOS SON LOS LIBROS: \n"<<libroCalificaciones1.obtenerNombreCurso()<<endl;
        cout<<"ESTOS SON LOS LIBROS: \n"<<libroCalificaciones2.obtenerNombreCurso()<<endl;
        
    return 0;
}


