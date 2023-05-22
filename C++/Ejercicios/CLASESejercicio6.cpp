#include<iostream>
#include<string>
using namespace std;

class NombrePersona{
    
    public:

    NombrePersona(string nombre)
    : nombrePersonaJoven(nombre)
    {

    };
    NombrePersona(){
        nombrePersonaJoven="SIN NOMBRE";
    }
    void obtenerNombre(string nombre){
        nombrePersonaJoven=nombre;
        cout<<"ESTE ES EL NOMBRE"<<establecerNombre()<<endl;
    }

    string establecerNombre(){
        return nombrePersonaJoven;
    }
    private: string nombrePersonaJoven;
};

int main(){
    NombrePersona alumno1("JULIO CESAR GARCIA AMBARIO");
    NombrePersona otraPersona;

    cout<<alumno1.establecerNombre()<<endl;
    cout<<otraPersona.establecerNombre();

    return 0;
}