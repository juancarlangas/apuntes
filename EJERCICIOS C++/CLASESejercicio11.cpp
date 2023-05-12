/*REPASO DE FUNCIONES AMIGAS*/
#include<iostream>

using std::cout;

class Persona{
    public:
        explicit Persona(){
            xedad=10;
        }
        void FnPrivada(){
            cout<<"ESTA ES LA EDAD DE EDAD PRIVADA: "
                <<xedad * 2<<endl;
        }
    friend void FnAmiga(Persona);
    private: 
        int xedad;
};

    void FnAmiga(Persona xPersona){
        cout<<"ESTE ES EL VALOR DE LA EDAD EN FUNCION AMIGA: "
            <<xPersona.xedad<<endl;
    }

int main(){
    Persona edadPersona;

    cout<<"Prueba persona"<<endl;
    edadPersona.FnPrivada();
    FnAmiga(edadPersona);
    return 0;
}