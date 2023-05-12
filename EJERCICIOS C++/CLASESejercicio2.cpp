//define la clase calificiociones con una funcion miembro que recibe un parametro
//crea un objeto LibroCalificaciones y llama su funcion mostrarMensaje

#include<iostream>
#include<string>
using namespace std;
class LibroCalificaciones{
    public:
    void mostrarMensaje(string nombreCurso)const{
        cout<<" BIENVENIDO AL LIBRO CALIFICAIONES PARA\n"<<nombreCurso<<"!"<<endl;
    }
};
int main(){
    string nombreDelCurso;
    LibroCalificaciones libroCalificiones;

    cout<<"INGRESE EL NOMBRE DEL CURSO: ";
    getline(cin,nombreDelCurso);
    cout<<endl;
    libroCalificiones.mostrarMensaje(nombreDelCurso);

    return 0;

}