#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::vector;


int main(void)
{
    int dimension = 0;
    char decision{'Y'};
    

    cout<<"BIENVENIDO POR FAVOR INGRESE LA DIMENSION: ";
    cin>>dimension;

    vector <int> Notas(dimension);
    
    for(int i = 0; i <dimension and decision == 'Y';++i)
    {
        cin.ignore();
        cout<<"POR FAVOR INGRESE NOTA NUMERO "<<i+1<<" :";
        cin>>Notas.at(i);
       
    }
       
    
    for(int j = 0; j < dimension ; ++j)
    {
        cout<<"DEPLEGANDO EL VALOR NUMERO "<<j+1<<" :"<< Notas.at(j)<<'\n';
    }
}