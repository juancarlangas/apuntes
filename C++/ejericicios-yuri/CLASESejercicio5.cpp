//ejercicio para entender como trabajan los constructores

#include<iostream>
#include<string>
using namespace std;

class Persona{
    public:

    explicit Persona (string nombre)
    : nombrePersona(nombre)//constructor inicializando nombrePersona coomo parametro
    {       
        //tambien puede inicializar funciones
    }

    void obtenerNombre(string nombre)
    {
        nombrePersona=nombre;
    }

    string darNombre(){
        return nombrePersona;
    }
    private: string nombrePersona;
};

int main(){
    Persona persona1("JULIO");

    cout<<persona1.darNombre();
    return 0;
}