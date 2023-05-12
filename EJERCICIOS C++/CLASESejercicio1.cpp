/*DEFINICION  DE MIEMBRO*/
#include<iostream>
using namespace std;

class LibroCalificaciones
{
    public:
    //Funcion que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
    void mostrarMensaje()const
    {
        cout<<"Bienvenido al Libro de Calificaciones!"<<endl;
    }//fin de la funcion mostrarMensaje

    void mostrarMensaje2()const
    {
        cout<<"HOLA DE NUEVO"<<endl;
    }
}; //fin d ela case LibroCalificaciones
int main(){
    LibroCalificaciones miLibrocalificaciones; //crea un objeto LibroCalificaiones llamado miLibroCalificaciones
    miLibrocalificaciones.mostrarMensaje();
    miLibrocalificaciones.mostrarMensaje2 ();
    return 0;
}