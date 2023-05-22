#include<iostream>
#include<string>

class LibroCalificaciones{
    public:
    explicit LibroCalificaciones(std::string nombre)
    :nombreCurso(nombre)
    {

    }
    void establecerNombreCurso(std::string nombre){
        nombreCurso=nombre;
    }
    std::string obtenerNombreCurso()const{
        return nombreCurso;
    }
    void mostrarMensaje()const{
        std::cout<<"Bienvenido a Libro de Calificaciones para\n"<<
        obtenerNombreCurso()<<std::endl;
    }
    private: std::string nombreCurso;
};