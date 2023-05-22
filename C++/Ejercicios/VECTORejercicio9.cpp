#include<iostream>
#include<vector>

using std::cout;
using std::vector;

int main(void)
{
    vector <int> vector1 {1,2,3,4,5};

    cout<<"VECTOR ORIGINAL: "<<'\n';

    for (int i : vector1)
    cout<<i<<'\n';
    
    vector1.push_back(40);
    vector1.push_back(17);

    cout<<"VECTOR DESPUES DE AGREGAR VALORES"<<'\n';
    for(int j : vector1)
    cout<<j<<'\n';

    //YA QUE k ACTUA COMO REFERECNIA PODEMOS MODIFICARLA Y  MODIFICAR
    //LOS VALORES DE k
    cout<<"VECTOR DESPUES DE MULTIPLICAR POR 2"<<'\n';
    for(int &k : vector1){
    k *= 2; 
    cout<<k<<'\n';
    }

    //.begin() devuelve un puntero de la primera posicion del vector
    //.end() devuelve la direccion de la ultima posicion del vector + 1
    //en decir una posicion mas del vector (afuera del rango del vector)

    cout<< "EJERCIO CON LOS METODOS  .begin() y .end() \n" ;
    for(auto numero = vector1.begin();   numero != vector1.end(); ++numero)
    cout<< *numero << '\n';

    
    //AL CONTRARIO .rbegin() devuelve un puntero una posicion antes del primer
    //elemento del vector y .end() devuelve la direccion del primer posicion
    cout << "EJERCICIO CON LOS METODOS .rbegin() y .rend()\n" ;
    for (auto numero = vector1.rbegin() ; numero != vector1.rend(); ++numero )
    cout << *numero << '\n';

    vector1.clear(); //borro todos los datos del vector
}