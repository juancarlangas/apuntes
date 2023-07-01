#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::vector;

int main(void)
{
    int dimension_vector,nuevo_elemento;

    cout<<"DIGITE LA DIMENSION DEL VECTOR: ";
    cin>>dimension_vector;

    vector<int> vector_demostracion(dimension_vector);

    for(int i=0;i<dimension_vector;++i)
    {
        cout<<"INGRESE EL VALOR DEL VECTOR EN LA POSICION "<<i+1<<" :";
        cin>>nuevo_elemento;

        vector_demostracion.push_back(nuevo_elemento);
    }

    for ( int j = 0; j < vector_demostracion.size(); ++j)
    {
        cout<<"ESTOS SON LOS VALORES ALMACENADOS EN EL VECTOR: "<<j+1<<" :"
            <<vector_demostracion.at(j)<<'\n';

    }
    
    

}